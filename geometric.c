/* Distribuição geométrica
 * Repetir até o primeiro sucesso
 * X~G(p)
 */

#include <math.h>

double geo_get_esperanca(double p) {
    return 1/p;
}

double geo_get_variancia(double p) {
    return (1-p)/(p*p);
}

double geo_get_prob_at(double p, int x) {
    return p*pow(1-p, x - 1);
}
