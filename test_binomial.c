#include "test.h"
#include "binomial.h"

void bin_get_esperanca_t() {
    TEST("Esperança binomial", 5 == bin_get_esperanca(10, 0.5));
}

int main() {
    bin_get_esperanca_t();
}
