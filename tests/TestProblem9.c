#include "unity.h"
#include "problem9.h"

void test_problem9_solution(void) {
  TEST_ASSERT_EQUAL(-1, problem9_solution());
}

void test_problem9_trinomial_squared(void) {
  TEST_ASSERT_EQUAL_MESSAGE(9, trinomial_squared(1, 1, 1), "Input: 1, 1, 1");
  TEST_ASSERT_EQUAL_MESSAGE(36, trinomial_squared(1, 2, 3), "Input: 1, 2, 3");
}

void setUp(void) {}
void tearDown(void) {}

int main(void) {
  UNITY_BEGIN();
  RUN_TEST(test_problem9_solution);
  RUN_TEST(test_problem9_trinomial_squared);
  return UNITY_END();
}
