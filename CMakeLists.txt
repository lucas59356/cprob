project(cprob LANGUAGES C)

enable_testing()

add_library(cprob_base basic.c)
add_executable(test_cprob_base test_basic.c test.c)
target_link_libraries(test_cprob_base cprob_base)
add_test(NAME test_cprob_base COMMAND test_cprob_base)

add_library(cprob_bernoulli bernoulli.c)
add_executable(test_cprob_bernoulli test_bernoulli.c test.c)
target_link_libraries(test_cprob_bernoulli cprob_bernoulli)
add_test(NAME test_cprob_bernoulli COMMAND test_cprob_bernoulli)

add_library(cprob_binomial binomial.c)
target_link_libraries(cprob_binomial cprob_base m)
add_executable(test_cprob_binomial test_binomial.c test.c)
target_link_libraries(test_cprob_binomial cprob_bernoulli cprob_binomial)
add_test(NAME test_cprob_binomial COMMAND test_cprob_binomial)
