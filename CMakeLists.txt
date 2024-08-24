# Version minimale de CMake requise
cmake_minimum_required(VERSION 3.10)

# Nom du projet
project(myHostel)

# Spécifie la version du standard C++
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Ajoute l'exécutable
add_executable(MonExecutable src/main.cpp)
