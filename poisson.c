/* POISSON
 * X ~ P(\lambda)
 * M_E é a constante de euler
 */

#include "base.h"
#include "poisson.h"
#include <math.h>

double poi_get_esperanca(int lambda) {
    return lambda;
}

double poi_get_variancia(int lambda) {
    return lambda;
}

double poi_get_prob_at(int lambda, int x) {
    return (pow(M_E, lambda*(0-1))*pow(lambda, x))/fat(x);
}
