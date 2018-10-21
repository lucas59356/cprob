#include "geometric.h"
#include "test.h"
#include <stdio.h>

void geo_get_esperanca_t() {
    TEST_DOUBLE("Esperança p = 0.2", geo_get_esperanca(0.2), 5);
    TEST_DOUBLE("Esperança p = 0.1", geo_get_esperanca(0.1), 10);
}

void geo_get_variancia_t() {
    TEST_DOUBLE("Variancia p = 0.5", geo_get_variancia(0.5), 2);
    TEST_DOUBLE("Variancia p = 0.1", geo_get_variancia(0.1), 90);
}

void geo_get_prob_at_t() {
    TEST_DOUBLE("X~G(0.1)@x=1", 0.1, geo_get_prob_at(0.1, 1));
    TEST_DOUBLE("X~G(0.1)@x=2", 0.09, geo_get_prob_at(0.1, 2));
    TEST_DOUBLE("X~G(0.1)@x=3", 0.081, geo_get_prob_at(0.1, 3));
}

int main() {
    TEST("DISTRIBUIÇÃO GEOMETRICA", 1);
    geo_get_esperanca_t();
    geo_get_variancia_t();
    geo_get_prob_at_t();
}
