#include "unity.h"
#include "problem10.h"

void test_problem10_solution(void) {
  TEST_ASSERT_EQUAL(142913828922, problem10_solution());
}

void test_problem10_sum_of_primes_below(void) {
  TEST_ASSERT_EQUAL(PROBLEM10_TEST_OUTPUT, sum_of_primes_below(PROBLEM10_TEST_INPUT));
  TEST_ASSERT_EQUAL(142913828922, sum_of_primes_below(PROBLEM10_INPUT));
}

void setUp(void) {}
void tearDown(void) {}

int main(void) {
  UNITY_BEGIN();
  RUN_TEST(test_problem10_solution);
  RUN_TEST(test_problem10_sum_of_primes_below);
  return UNITY_END();
}
