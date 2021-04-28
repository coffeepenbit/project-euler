#include "unity.h"
#include "problem5.h"

void test_problem5_solution(void) {
  TEST_ASSERT_EQUAL_MESSAGE(2, problem5_solution(1, 2), "Input: 1, 2");
  TEST_ASSERT_EQUAL_MESSAGE(2520, problem5_solution(1, 10), "Input: 1, 10");
  TEST_ASSERT_EQUAL_MESSAGE(232792560, problem5_solution(1, 20), "Input: 1, 20");
}

void setUp (void) {}
void tearDown (void) {}

int main(void) {
  UNITY_BEGIN();
  RUN_TEST(test_problem5_solution);
  return UNITY_END();
}
