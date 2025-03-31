#include <iostream>
#include <cmath>
#include <random>
#include <vector>
#include "option_pricing.hpp"

using namespace std;

// Fonction pour générer une simulation de prix d'actif sous-jacent
double simulate_price(double S0, double r, double sigma, double T, double dt) {
    random_device rd;
    mt19937 gen(rd());
    normal_distribution<> dist(0.0, 1.0);

    int steps = static_cast<int>(T / dt);
    double price = S0;

    for (int i = 0; i < steps; ++i) {
        double dW = dist(gen) * sqrt(dt);
        price *= exp((r - 0.5 * sigma * sigma) * dt + sigma * dW);
    }

    return price;
}

// Fonction pour calculer le payoff d'une option call européenne
double option_payoff(double final_price, double strike) {
    return max(final_price - strike, 0.0);
}

int main() {
    // Paramètres de l'option
    double S0 = 100.0;  // Prix initial de l'actif sous-jacent
    double strike = 100.0; // Prix d'exercice de l'option
    double r = 0.05;     // Taux d'intérêt sans risque
    double sigma = 0.2;  // Volatilité de l'actif sous-jacent
    double T = 1.0;      // Temps à l'échéance
    int num_simulations = 100000; // Nombre de simulations
    double dt = 1.0 / 252; // Pas de temps (1 jour par rapport à 252 jours de bourse)

    // Calcul du prix de l'option via Monte Carlo
    double option_price = monte_carlo_option_price(S0, strike, r, sigma, T, num_simulations, dt);

    cout << "Le prix estimé de l'option européenne call est : " << option_price << endl;

    return 0;
}
