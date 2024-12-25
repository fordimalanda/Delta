# Résolution d'une équation du second degré en C

Ce projet en langage C résout l'équation du second degré de la forme :

\[
ax^2 + bx + c = 0
\]

Le programme calcule les racines de l'équation, en tenant compte du discriminant (\( \Delta \)) pour déterminer si les solutions sont réelles ou complexes.

## Structure du projet :
```bash
/mon-projet
│
├── main.c               # Point d'entrée du programme
├── src/                 # Dossier contenant les fichiers sources
│   ├── question.c       # Fonction de saisie des coefficients
│   ├── fin_du_program.c # Fonction de fin du programme
│   ├── delta.c          # Calcul du discriminant
│   ├── ao.c             # Calcul des solutions réelles
│   ├── formule.c        # Formule pour les racines
└── /App                 # Dossier contenant l'exécutable compilé

## Prérequis

Avant d'exécuter ce programme, vous devez avoir **GCC** installé sur votre machine. GCC (GNU Compiler Collection) est un compilateur pour divers langages, y compris le langage C.

### Installer GCC

- Si vous n'avez pas GCC, vous pouvez l'installer en suivant les instructions sur [GCC - Getting Started](https://gcc.gnu.org).
- Sur **Windows**, vous pouvez utiliser **MinGW** ou **MSYS2** pour installer GCC. Assurez-vous que le répertoire de GCC est ajouté à la variable d'environnement **PATH** pour que la commande `gcc` soit disponible dans le terminal.
- Sur **Linux** ou **macOS**, vous pouvez installer GCC via votre gestionnaire de paquets :
  - Sur **Ubuntu/Debian** : `sudo apt install gcc`
  - Sur **macOS** : `brew install gcc`

## Compilation du programme

Une fois GCC installé, vous pouvez compiler le programme à l'aide de la commande suivante dans le terminal. Assurez-vous de vous trouver dans le répertoire du projet où se trouvent les fichiers source.

### Commande pour compiler avec GCC :

```bash
gcc main.c src/*.c -o App/App

