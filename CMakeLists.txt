cmake_minimum_required(VERSION 3.10)

# Nom du projet
project(MonteCarloOptionPricing)

# Définir la version du C++ que nous utilisons
set(CMAKE_CXX_STANDARD 17)

# Ajouter le répertoire source
add_executable(monte_carlo_option_pricing src/main.cpp)

# Inclure les fichiers d'en-tête
target_include_directories(monte_carlo_option_pricing PRIVATE include)
