# os-process-lab
Exploration approfondie de la gestion des processus OS sous Unix/Linux en C. Ce lab regroupe des implémentations pratiques sur le fork et le cycle de vie (wait, exit)

# OS Process Lab (C)

Ce dépôt regroupe diverses manipulations système en C pour comprendre et maîtriser la gestion des processus sous Unix/Linux en C. Ce lab regroupe des implémentations pratiques sur le fork et le cycle de vie (wait, exit).

## Objectifs
- Comprendre le cycle de vie d'un processus (`fork`, `exec`, `wait`, `exit`).
- Manipuler la hiérarchie parent-enfant.

## Prérequis
- Un compilateur C (GCC ).
- Un environnement de type Unix (Linux, macOS, ou WSL sur Windows).
- `make` (optionnel, pour l'automatisation).

## Structure du projet
- `/basics` : Utilisation de `fork()` et récupération des PIDs.
- `/signals` : Manipulation de `sigaction` et `kill`.
- `/ipc` : Tubes (pipes) et mémoire partagée.
- `/zombies` : Simulation et nettoyage de processus zombies/orphelins.

## Compilation et Exécution
Pour compiler un fichier spécifique (ex: fork_basic.c) :
```bash
gcc -Wall -Wextra src/basics/fork_basic.c -o fork_basic
./fork_basic
```

## Licence
MIT

