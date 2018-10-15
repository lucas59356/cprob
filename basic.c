#include "basic.h"


// Fatorial: n!
long int fat(int n) {
    return n == 0 ? 1: n * fat(n - 1);
}

// Combinação: Cn,p
int comb(int n, int p) {
    return fat(n)/(fat(p)*fat(n-p));
}
