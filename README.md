[![Langage](https://img.shields.io/badge/Langage-C-blue.svg?logo=c&logoColor=white)](https://fr.wikipedia.org/wiki/C_(langage))
[![Compilateur](https://img.shields.io/badge/Compilateur-GCC-green.svg?logo=gcc&logoColor=white)](https://gcc.gnu.org/)

# Résolution d'une équation du second degré en C

Ce projet en langage C résout l'équation du second degré de la forme :

\[
ax^2 + bx + c = 0
\]

Le programme calcule les racines de l'équation, en tenant compte du discriminant (\( \Delta \)) pour déterminer si les solutions sont réelles ou complexes.

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
