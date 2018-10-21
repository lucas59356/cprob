#include <stdio.h>
#include <stdlib.h>
#include "test.h"

void TEST(const char *message, int is_passed) {
    printf("TEST %s... ", message);
    if (is_passed) printf("OK\n");
    else {
        printf("FAIL\n");
    //        exit(1);
    };
}

void TEST_DOUBLE(const char *message, double a, double b) {
    int res = ((a - b) < 0.0001) && ((b - a) < 0.0001);
    if (!res)
        printf("%lf != %lf\n", a, b);
    TEST(message, res);
    }
