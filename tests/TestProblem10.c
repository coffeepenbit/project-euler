#include "unity.h"
#include "problem10.h"

void test_problem10_solution(void) {
  TEST_ASSERT_EQUAL(-1, problem10_solution());
}

void test_problem10_sum_of_primes_below(void) {
  TEST_ASSERT_EQUAL(TEST_OUTPUT, sum_of_primes_below(TEST_INPUT));
}

void setUp(void) {}
void tearDown(void) {}

int main(void) {
  UNITY_BEGIN();
  RUN_TEST(test_problem10_solution);
  RUN_TEST(test_problem10_sum_of_primes_below);
  return UNITY_END();
}
