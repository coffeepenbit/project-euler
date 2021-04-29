#include "unity.h"
#include "problem6.h"

void test_problem6_solution(void) {
  TEST_ASSERT_EQUAL_MESSAGE(2640, problem6_solution(10), "Input: 10");
  TEST_ASSERT_EQUAL_MESSAGE(25164150, problem6_solution(100), "Input: 100");
}

void setUp(void) {}
void tearDown(void) {}

int main(void) {
  UNITY_BEGIN();
  RUN_TEST(test_problem6_solution);
  return UNITY_END();
}
