#include "test.h"
#include "basic.h"

#include <stdio.h>

void t_fat() {
    TEST("Fatorial de 0", 1 == fat(0));
    TEST("Fatorial de 1", 1 == fat(1));
    TEST("Fatorial de 4", 24 == fat(4));
    TEST("Fatorial de 10", 3628800 == fat(10));
}

void t_comb() {
    TEST("Combinação de 4 e 3", 4 == comb(4, 3));
    TEST("Combinação de 11 e 4", 330 == comb(11, 4));
    TEST("Combinação de 7 e 3", 35 == comb(7, 3));
}

int main() {
    printf("Module: Basic\n");
    t_fat();
    t_comb();
}
