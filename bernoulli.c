/* BERNOULLI 
 * X ~ Ber(p)
 */

#include "basic.h"

// E(X)
double ber_get_esperanca(double p) {
    return p;
}

// P(~p)
double ber_get_complemento(double p) {
    return 1 - p;
}

// V(X)
double ber_get_variancia(double p) {
    return p*(1-p);
}


