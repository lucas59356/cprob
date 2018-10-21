#include "poisson.h"
#include "test.h"
#include <math.h>

void poi_get_esperanca_t() {
    TEST_DOUBLE("get_esperanca", poi_get_esperanca(4), 4);
}

void poi_get_variancia_t() {
    TEST_DOUBLE("get_variancia", poi_get_variancia(4), 4);
}

void poi_get_prob_at_t() {
    TEST_DOUBLE("Poisson(8) @ x = 0", poi_get_prob_at(8, 0), 0.0003);
    TEST_DOUBLE("Poisson(8) @ x = 1", poi_get_prob_at(8, 1), 0.002684);
    TEST_DOUBLE("Poisson(8) @ x = 2", poi_get_prob_at(8, 2), 0.010735);
    TEST_DOUBLE("Poisson(8) @ x = 3", poi_get_prob_at(8, 3), 0.028626);
    TEST_DOUBLE("Poisson(8) @ x = 4", poi_get_prob_at(8, 4), 0.057252);
    TEST_DOUBLE("Poisson(8) @ x = 5", poi_get_prob_at(8, 5), 0.091604);
    TEST_DOUBLE("Poisson(8) @ x = 6", poi_get_prob_at(8, 6), 0.122138);
    TEST_DOUBLE("Poisson(8) @ x = 7", poi_get_prob_at(8, 7), 0.139587);
}

int main() {
    poi_get_esperanca_t();
    poi_get_variancia_t();
    poi_get_prob_at_t();
    TEST_DOUBLE("Euler", M_E, 2.718281);
}
