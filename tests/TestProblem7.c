#include "unity.h"
#include "problem7.h"

void test_problem7_solution(void) {
  TEST_ASSERT_EQUAL(104743, problem7_solution);
}

void test_problem7_nth_prime(void) {
  TEST_ASSERT_EQUAL_MESSAGE(2, nth_prime(1), "Input: 1");
  TEST_ASSERT_EQUAL_MESSAGE(3, nth_prime(2), "Input: 2");
  TEST_ASSERT_EQUAL_MESSAGE(5, nth_prime(3), "Input: 3");
  TEST_ASSERT_EQUAL_MESSAGE(7, nth_prime(4), "Input: 4");
  TEST_ASSERT_EQUAL_MESSAGE(11, nth_prime(5), "Input: 5");
  TEST_ASSERT_EQUAL_MESSAGE(13, nth_prime(6), "Input: 6");
  TEST_ASSERT_EQUAL_MESSAGE(104743, nth_prime(10001), "Input: 10001");
}

void setUp(void) {}
void tearDown(void) {}

int main(void) {
  UNITY_BEGIN();
  RUN_TEST(test_problem7_solution);
  RUN_TEST(test_problem7_nth_prime);
  return UNITY_END();
}
