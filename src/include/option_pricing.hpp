#ifndef OPTION_PRICING_HPP
#define OPTION_PRICING_HPP

double simulate_price(double S0, double r, double sigma, double T, double dt);
double option_payoff(double final_price, double strike);
double monte_carlo_option_price(double S0, double strike, double r, double sigma, double T, int num_simulations, double dt);

#endif // OPTION_PRICING_HPP
