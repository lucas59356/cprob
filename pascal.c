/* Distribuição binomial negativa / pascal
 * X~BN(r, p) -- Número de repetições até r sucessos
 */

#include "base.h"
#include <math.h>

double pas_get_esperanca(int r, double p) {
    return r / p;
}

double pas_get_variancia(int r, double p) {
    return (r*(1-p))/(p*p);
}

double pas_get_prob_at(int r, double p, int x) {
    return comb(x - 1, r - 1)*pow(p, r)*pow(1-p, x - r);
}
