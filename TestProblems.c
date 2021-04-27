#include <stdbool.h>
#include "unity.h"
#include "problem1.h"
#include "problem2.h"
#include "problem3.h"

void test_problem1_solution(void) {
  TEST_ASSERT_EQUAL(233168, problem1_solution());
}

void test_problem2_solution(void) {
  TEST_ASSERT_EQUAL(4613732, problem2_solution());
}

void test_problem3_solution(void) {
  // TEST_ASSERT_EQUAL(0, problem3_solution());
}

void test_problem3_is_prime_number(void) {
  TEST_ASSERT_EQUAL(true, is_prime_number(1));
  TEST_ASSERT_EQUAL(true, is_prime_number(2));
  TEST_ASSERT_EQUAL(true, is_prime_number(3));
  TEST_ASSERT_EQUAL(false, is_prime_number(4));
  TEST_ASSERT_EQUAL(true, is_prime_number(5));
  TEST_ASSERT_EQUAL(false, is_prime_number(6));
  TEST_ASSERT_EQUAL(true, is_prime_number(7));
}

void setUp (void) {}
void tearDown (void) {}

int main(void) {
  UNITY_BEGIN();
  RUN_TEST(test_problem1_solution);
  RUN_TEST(test_problem2_solution);
  RUN_TEST(test_problem3_solution);
  RUN_TEST(test_problem3_is_prime_number);
  return UNITY_END();
}
