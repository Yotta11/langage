:- module minage.
:- interface.

:- import_module io.

:- pred main(io::di, io::uo) is det.

%============================================================
:- implementation.

:- import_module list.
:- import_module int.
:- import_module string.
:- import_module char.

%============================================================
% TYPES
%============================================================

:- type block
    ---> block(
        b_index     :: int,
        b_data      :: string,
        b_nonce     :: int,
        b_hash      :: string,
        b_prev_hash :: string
    ).

:- type blockchain == list(block).

%============================================================
% HASH AMÉLIORÉ (DÉTERMINISTE MAIS VARIÉ)
%============================================================

:- func compute_hash(string) = string.

compute_hash(S) = Hash :-
    string.to_char_list(S, Cs),
    HashInt = hash_acc(Cs, 5381),
    Hash = int_to_hex8(HashInt /\ 0x7FFFFFFF).

:- func hash_acc(list(char), int) = int.

hash_acc([], Acc) = Acc.
hash_acc([C | R], Acc) =
    hash_acc(R, ((Acc << 5) + Acc) + char.to_int(C)).

%============================================================
% HEX
%============================================================

:- func int_to_hex8(int) = string.

int_to_hex8(N) = Str :-
    Str = string.from_char_list([
        hex_digit((N >> 28) /\ 15),
        hex_digit((N >> 24) /\ 15),
        hex_digit((N >> 20) /\ 15),
        hex_digit((N >> 16) /\ 15),
        hex_digit((N >> 12) /\ 15),
        hex_digit((N >> 8)  /\ 15),
        hex_digit((N >> 4)  /\ 15),
        hex_digit(N /\ 15)
    ]).

:- func hex_digit(int) = char.

hex_digit(N) = C :-
    ( if N < 10 then
        C = det_char(N + 48)
    else
        C = det_char(N - 10 + 97)
    ).

:- func det_char(int) = char.
det_char(I) = C :- C = char.det_from_int(I).

%============================================================
% BLOCK STRING (NONCE INCLUS = IMPORTANT)
%============================================================

:- func block_string(int, string, int, string) = string.

block_string(I, D, N, P) =
    string.format("%d|%s|%d|%s|%s",
        [i(I), s(D), i(N), s(P), s(int_to_string(N))]).

:- func hash_block(int, string, int, string) = string.

hash_block(I, D, N, P) =
    compute_hash(block_string(I, D, N, P)).

%============================================================
% DIFFICULTY CHECK (ROBUSTE)
%============================================================

:- pred meets_difficulty(string::in, int::in) is semidet.

meets_difficulty(Hash, Diff) :-
    Diff > 0,
    string.length(Hash, Len),
    Len >= Diff,
    string.left(Hash, Diff) = Prefix,
    all_zero(Prefix).

:- pred all_zero(string::in) is semidet.

all_zero(S) :-
    string.to_char_list(S, Cs),
    zero_chars(Cs).

:- pred zero_chars(list(char)::in) is semidet.

zero_chars([]).
zero_chars(['0' | R]) :-
    zero_chars(R).

%============================================================
% MINING OPTIMISÉ (SAFE LOOP)
%============================================================

:- pred mine_block(int::in, string::in, string::in, int::in,
    int::out, string::out) is det.

mine_block(I, D, Prev, Diff, Nonce, Hash) :-
    mine_loop(I, D, Prev, Diff, 0, Nonce, Hash).

:- pred mine_loop(int::in, string::in, string::in, int::in,
    int::in, int::out, string::out) is det.

mine_loop(I, D, Prev, Diff, Try, Nonce, Hash) :-
    H = hash_block(I, D, Try, Prev),
    ( if meets_difficulty(H, Diff) then
        Nonce = Try,
        Hash = H
    else
        mine_loop(I, D, Prev, Diff, Try + 1, Nonce, Hash)
    ).

%============================================================
% GENESIS
%============================================================

:- func genesis_block = block.

genesis_block = block(0, "GENESIS", 0, H, "0") :-
    H = hash_block(0, "GENESIS", 0, "0").

%============================================================
% BUILD BLOCK (CORRIGÉ + PROPRE)
%============================================================

:- pred build_block(string::in, int::in,
    blockchain::in, block::out) is det.

build_block(Data, Diff, Chain, NewBlock) :-
    ( if Chain = [Last | _] then
        Prev = Last ^ b_hash,
        Idx = Last ^ b_index + 1
    else
        Prev = "0",
        Idx = 0
    ),
    mine_block(Idx, Data, Prev, Diff, Nonce, Hash),
    NewBlock = block(Idx, Data, Nonce, Hash, Prev).

%============================================================
% ADD BLOCK
%============================================================

:- pred add_block(string::in, int::in,
    blockchain::in, blockchain::out,
    io::di, io::uo) is det.

add_block(Data, Diff, Chain, NewChain, !IO) :-
    build_block(Data, Diff, Chain, B),

    io.format("Mining block %d: %s\n",
        [i(B ^ b_index), s(B ^ b_data)], !IO),

    io.format("Nonce=%d | Hash=%s\n",
        [i(B ^ b_nonce), s(B ^ b_hash)], !IO),

    NewChain = [B | Chain].

%============================================================
% PRINT CHAIN
%============================================================

:- pred print_chain(blockchain::in, io::di, io::uo) is det.

print_chain([], !IO).
print_chain([B | R], !IO) :-
    io.format("Block %d | %s | nonce=%d | hash=%s\n",
        [i(B ^ b_index), s(B ^ b_data),
         i(B ^ b_nonce), s(B ^ b_hash)], !IO),
    print_chain(R, !IO).

%============================================================
% MAIN
%============================================================

main(!IO) :-
    Difficulty = 1,   % SAFE + rapide (augmente si tu veux)

    Genesis = genesis_block,
    Chain0 = [Genesis],

    add_block("A->B 50", Difficulty, Chain0, C1, !IO),
    add_block("B->C 20", Difficulty, C1, C2, !IO),
    add_block("C->D 10", Difficulty, C2, C3, !IO),

    io.write_string("\n=== BLOCKCHAIN ===\n", !IO),
    print_chain(C3, !IO).
