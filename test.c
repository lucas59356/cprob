#include <stdio.h>
#include <stdlib.h>
#include "test.h"

void TEST(const char *message, int is_passed) {
    printf("TEST %s... ", message);
    if (is_passed) printf("OK\n");
    else {
        printf("FAIL\n");
        exit(1);
    };
}
