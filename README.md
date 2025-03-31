# Monte Carlo Option Pricing in C++

Ce projet implémente la méthode de Monte Carlo pour le **pricing d'options européennes** dans un contexte financier, en utilisant le langage **C++** pour optimiser les performances de simulation.

## Structure du projet



monte-carlo-option-pricing-cpp/
├── CMakeLists.txt          # Fichier de configuration CMake
├── main.cpp                # Code principal qui effectue la simulation
├── README.md               # Documentation du projet
└── include/
    └── option_pricing.hpp  # Déclarations des fonctions utilisées



## Description

L'objectif de ce projet est de calculer le prix d'une option européenne **Call** à l'aide de la méthode de simulation de Monte Carlo. Le prix de l'option est obtenu en simulant plusieurs trajectoires de prix d'actifs sous-jacents selon un modèle de **mouvement brownien géométrique**.

## Compilation et Exécution

### Prérequis

- CMake (version 3.10 ou plus récente)
- Un compilateur C++ (g++ ou clang++)

