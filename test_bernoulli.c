#include "test.h"
#include "bernoulli.h"

#include <stdio.h>

void ber_get_esperanca_t() {
    TEST_DOUBLE("O teste mais desnecessário do programa", ber_get_esperanca(0.12), 0.12);
}

void ber_get_complemento_t() {
    TEST_DOUBLE("Outro teste bastante desnecessário mas não tanto", ber_get_complemento(0.1) ,0.9);
}

void ber_get_variancia_t() {
    TEST_DOUBLE("Variancia a p = 0.25", ber_get_variancia(0.5), 0.25);
}
int main() {
    ber_get_esperanca_t();
    ber_get_complemento_t();
    ber_get_variancia_t();
}
