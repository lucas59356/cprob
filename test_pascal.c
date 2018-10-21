#include "test.h"
#include "pascal.h"
#include <stdio.h>

void pas_get_esperanca_t() {
    TEST_DOUBLE("X~BN(10, 0.5)", pas_get_esperanca(10, 0.5), 20);
}

void pas_get_variancia_t() {
    TEST_DOUBLE("X~BN(10, 0.5)", pas_get_variancia(13, 0.5), 26);
}

void pas_get_prob_at_t() {
    TEST_DOUBLE("X~BN(10, 0.1)@ x = 10", pas_get_prob_at(3, 0.1, 10), 0.017219);
}

int main() {
    TEST("DISTRIBUIÇÃO PASCAL", 1);
    pas_get_esperanca_t();
    pas_get_variancia_t();
    pas_get_prob_at_t();
}
