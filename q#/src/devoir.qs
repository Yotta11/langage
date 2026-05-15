namespace QuantumComputing {

    open Microsoft.Quantum.Intrinsic;
    open Microsoft.Quantum.Arrays;
    open Microsoft.Quantum.Measurement;
    open Microsoft.Quantum.Diagnostics;
    open Microsoft.Quantum.Canon;

    // --- PARTIE 1 : TRI BITONIQUE ---
    operation CompareAndSwap(q1 : Qubit, q2 : Qubit) : Unit {
        if (M(q1) == One and M(q2) == Zero) {
            SWAP(q1, q2);
        }
    }

    operation BitonicSort(register : Qubit[]) : Unit {
        let n = Length(register);
        if (n > 1) {
            let half = n / 2;
            BitonicSort(register[...half-1]);
            BitonicSort(register[half...]);
            
            for i in 0 .. half - 1 {
                CompareAndSwap(register[i], register[i + half]);
            }
        }
    }

    // --- PARTIE 2 : MINAGE (GROVER) ---
    operation BlockchainOracle(nonce : Qubit[], target : Bool[], result : Qubit) : Unit is Adj + Ctl {
        // On utilise ApplyPauliFromBitString directement
        // Le but est d'inverser 'result' SI le nonce correspond au target
        within {
            for i in 0 .. Length(nonce) - 1 {
                if (not target[i]) {
                    X(nonce[i]);
                }
            }
        } apply {
            Controlled X(nonce, result);
        }
    }

    // --- POINT D'ENTRÉE ---
    @EntryPoint()
    operation ExecuteQuantumTasks() : Unit {
        // 1. Démo Tri
    use sortingRegister = Qubit[4];
    // Initialisation d'un état non trié (ex: [1, 0, 1, 1])
    X(sortingRegister[0]);
    X(sortingRegister[2]);
    X(sortingRegister[3]);
    
    // Mesure et affichage AVANT le tri
    // Note : On utilise MResetEachZ pour lire sans laisser les qubits actifs
    let avant = MResetEachZ(sortingRegister); 
    Message($"Tableau avant tri : {avant}");
    
    // Ré-initialisation pour le tri (car la mesure a détruit l'état)
    X(sortingRegister[0]);
    X(sortingRegister[2]);
    X(sortingRegister[3]);

    BitonicSort(sortingRegister);
    
    // Mesure et affichage APRÈS le tri
    let apres = MeasureEachZ(sortingRegister);
    Message($"Tableau trié      : {apres}");
        
        // 2. Démo Mining (Recherche de Nonce)
        let difficulty = [true, false]; // On cherche |10>
        use nonce = Qubit[2];
        use targetQubit = Qubit();
        
        // Préparation de l'état esclave pour le Phase Kickback
        X(targetQubit);
        H(targetQubit);
        
        ApplyToEach(H, nonce); 
        
        // Application de l'Oracle
        BlockchainOracle(nonce, difficulty, targetQubit);
        
        // Diffusion (Simplifiée pour 2 qubits)
        ApplyToEach(H, nonce);
        ApplyToEach(X, nonce);
        Controlled Z([nonce[0]], nonce[1]);
        ApplyToEach(X, nonce);
        ApplyToEach(H, nonce);
        
        let res = MeasureEachZ(nonce);
        Message($"Nonce trouve pour le minage : {res}");
        
        ResetAll(sortingRegister);
        ResetAll(nonce);
        Reset(targetQubit);
    }
}