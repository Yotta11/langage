#projet d'implementation du tri bitnique et du minage de la blockchain'

import qsharp

# Initialise le projet
qsharp.init(project_root = ".")

print("--- Lancement du Devoir Quantique ---")
# qsharp.eval() renvoie les sorties Message() directement vers la console
# dans la plupart des environnements. 
# Si vous ne voyez rien, c'est peut-être que l'opération ne retourne rien.
try:
    # On exécute l'opération
    qsharp.eval("QuantumComputing.ExecuteQuantumTasks()")
except Exception as e:
    print(f"Erreur d'exécution : {e}")
print("--- Simulation terminée ---")
