%============================================================
% tri.m
% Tri Bitonique (Bitonic Sort) — implémentation Mercury
%============================================================

:- module tri.
:- interface.

:- import_module io.

:- pred main(io::di, io::uo) is det.

%============================================================
:- implementation.

:- import_module list.
:- import_module int.
:- import_module bool.
:- import_module string.

%============================================================
% TYPE DIRECTION
%============================================================

:- type direction == bool.

:- func ascending = direction.
:- func descending = direction.

ascending = yes.
descending = no.

%============================================================
% BITONIC SORT
%============================================================

:- pred bitonic_sort(direction::in,
    list(int)::in,
    list(int)::out) is det.

bitonic_sort(Dir, List, Sorted) :-
    (
        List = [],
        Sorted = []
    ;
        List = [X],
        Sorted = [X]
    ;
        List = [_, _ | _],

        length(List, N),
        Half = N / 2,

        split(List, Half, Left, Right),

        bitonic_sort(ascending, Left, SortedLeft),
        bitonic_sort(descending, Right, SortedRight),

        append(SortedLeft, SortedRight, Bitonic),

        bitonic_merge(Dir, Bitonic, Sorted)
    ).

%============================================================
% BITONIC MERGE
%============================================================

:- pred bitonic_merge(direction::in,
    list(int)::in,
    list(int)::out) is det.

bitonic_merge(_Dir, [], []).
bitonic_merge(_Dir, [X], [X]).

bitonic_merge(Dir, List, Merged) :-
    List = [_, _ | _],

    length(List, N),
    Half = N / 2,

    split(List, Half, Left, Right),

    compare_and_swap(Dir, Left, Right, NewLeft, NewRight),

    bitonic_merge(Dir, NewLeft, MergedLeft),
    bitonic_merge(Dir, NewRight, MergedRight),

    append(MergedLeft, MergedRight, Merged).

%============================================================
% COMPARE AND SWAP
%============================================================

:- pred compare_and_swap(
    direction::in,
    list(int)::in,
    list(int)::in,
    list(int)::out,
    list(int)::out
) is det.

compare_and_swap(_, [], [], [], []).

compare_and_swap(Dir,
    [A | As],
    [B | Bs],
    [First | RestFirst],
    [Second | RestSecond]) :-

    (
        if Dir = ascending then
            (
                if A =< B then
                    First = A,
                    Second = B
                else
                    First = B,
                    Second = A
            )
        else
            (
                if A >= B then
                    First = A,
                    Second = B
                else
                    First = B,
                    Second = A
            )
    ),

    compare_and_swap(
        Dir,
        As,
        Bs,
        RestFirst,
        RestSecond
    ).

compare_and_swap(_, [], [_ | _], [], []).
compare_and_swap(_, [_ | _], [], [], []).

%============================================================
% SPLIT
%============================================================

:- pred split(
    list(int)::in,
    int::in,
    list(int)::out,
    list(int)::out
) is det.

split(List, N, Left, Right) :-
    ( if N =< 0 then
        Left = [],
        Right = List
    else
        (
            if List = [H | T] then
                (
                    split(T, N - 1, RestLeft, Right),
                    Left = [H | RestLeft]
                )
            else
                (
                    Left = [],
                    Right = []
                )
        )
    ).

%============================================================
% PRINT LIST
%============================================================

:- pred print_list(list(int)::in,
    io::di, io::uo) is det.

print_list([], !IO) :-
    io.write_string("[]\n", !IO).

print_list([H | T], !IO) :-
    io.write_string("[", !IO),
    print_elems([H | T], !IO),
    io.write_string("]\n", !IO).

:- pred print_elems(list(int)::in,
    io::di, io::uo) is det.

print_elems([], !IO).

print_elems([X], !IO) :-
    io.write_int(X, !IO).

print_elems([X, Y | Rest], !IO) :-
    io.write_int(X, !IO),
    io.write_string(", ", !IO),
    print_elems([Y | Rest], !IO).

%============================================================
% VERIFICATION TRI
%============================================================

:- pred verifier_trie(list(int)::in,
    bool::out) is det.

verifier_trie([], yes).
verifier_trie([_], yes).

verifier_trie([A, B | Rest], Result) :-
    ( if A =< B then
        verifier_trie([B | Rest], Result)
    else
        Result = no
    ).

%============================================================
% GENERATION LISTE
%============================================================

:- pred generer_liste(
    int::in,
    list(int)::in,
    list(int)::out
) is det.

generer_liste(N, Acc, Result) :-
    ( if N =< 0 then
        Result = Acc
    else
        generer_liste(N - 1, [N | Acc], Result)
    ).

%============================================================
% MAIN
%============================================================

main(!IO) :-

    io.write_string(
        "=============================================\n",
        !IO),

    io.write_string(
        "   TRI BITONIQUE — Mercury Implementation\n",
        !IO),

    io.write_string(
        "=============================================\n\n",
        !IO),

    %--------------------------------------------------------
    % TEST 1
    %--------------------------------------------------------

    io.write_string(
        "--- Test 1 : Liste aléatoire ---\n",
        !IO),

    L1 = [3, 7, 4, 8, 6, 2, 1, 5],

    io.write_string("Entrée  : ", !IO),
    print_list(L1, !IO),

    bitonic_sort(ascending, L1, S1),

    io.write_string("Sortie  : ", !IO),
    print_list(S1, !IO),

    verifier_trie(S1, V1),

    (
        V1 = yes,
        io.write_string("Vérification : OK ✓\n\n", !IO)
    ;
        V1 = no,
        io.write_string("Vérification : ECHEC ✗\n\n", !IO)
    ),

    %--------------------------------------------------------
    % TEST 2
    %--------------------------------------------------------

    io.write_string(
        "--- Test 2 : Liste décroissante ---\n",
        !IO),

    generer_liste(16, [], L2),

    io.write_string("Entrée  : ", !IO),
    print_list(L2, !IO),

    bitonic_sort(ascending, L2, S2),

    io.write_string("Sortie  : ", !IO),
    print_list(S2, !IO),

    verifier_trie(S2, V2),

    (
        V2 = yes,
        io.write_string("Vérification : OK ✓\n\n", !IO)
    ;
        V2 = no,
        io.write_string("Vérification : ECHEC ✗\n\n", !IO)
    ),

    %--------------------------------------------------------
    % TEST 3
    %--------------------------------------------------------

    io.write_string(
        "--- Test 3 : Ordre décroissant ---\n",
        !IO),

    L3 = [5, 3, 8, 1, 9, 2, 7, 4],

    io.write_string("Entrée  : ", !IO),
    print_list(L3, !IO),

    bitonic_sort(descending, L3, S3),

    io.write_string("Sortie  : ", !IO),
    print_list(S3, !IO),

    io.write_string(
        "\n=============================================\n",
        !IO).
