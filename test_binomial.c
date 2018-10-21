#include "test.h"
#include "binomial.h"

void bin_get_esperanca_t() {
    TEST_DOUBLE("Esperança binomial", 5, bin_get_esperanca(10, 0.5));
}
void bin_get_prob_at_t() {
    TEST_DOUBLE("X~Bin(18;0.05)@x=0", bin_get_prob_at(18, 0.05, 0), 0.397214);
    TEST_DOUBLE("X~Bin(18;0.05)@x=1", bin_get_prob_at(18, 0.05, 1), 0.376308301);
    TEST_DOUBLE("X~Bin(5;0.5)@x=0", bin_get_prob_at(5, 0.5, 0), 0.03125);
    TEST_DOUBLE("X~Bin(5;0.5)@x=1", bin_get_prob_at(5, 0.5, 1), 0.15625);
    TEST_DOUBLE("X~Bin(5;0.5)@x=2", bin_get_prob_at(5, 0.5, 2), 0.3125);
    TEST_DOUBLE("X~Bin(5;0.5)@x=3", bin_get_prob_at(5, 0.5, 3), 0.3125);
    TEST_DOUBLE("X~Bin(5;0.5)@x=4", bin_get_prob_at(5, 0.5, 4), 0.15625);
    TEST_DOUBLE("X~Bin(5;0.5)@x=5", bin_get_prob_at(5, 0.5, 5), 0.03125);
    TEST_DOUBLE("X~Bin(5;0.25)@x=0", bin_get_prob_at(5, 0.25, 0), 0.237305);
    TEST_DOUBLE("X~Bin(5;0.25)@x=1", bin_get_prob_at(5, 0.25, 1), 0.3955);
    TEST_DOUBLE("X~Bin(5;0.25)@x=2", bin_get_prob_at(5, 0.25, 2), 0.2636);
    TEST_DOUBLE("X~Bin(5;0.25)@x=3", bin_get_prob_at(5, 0.25, 3), 0.0878);
    TEST_DOUBLE("X~Bin(5;0.25)@x=4", bin_get_prob_at(5, 0.25, 4), 0.014648);
    TEST_DOUBLE("X~Bin(5;0.25)@x=5", bin_get_prob_at(5, 0.25, 5), 0.0009);

}

int main() {
    bin_get_esperanca_t();
    bin_get_prob_at_t();
}
