#include "unity.h"
#include "problem1.h"

void test_problem1_solution(void) {
  TEST_ASSERT_EQUAL(233168, problem1_solution());
}

void setUp(void) {}
void tearDown(void) {}

int main(void) {
  UNITY_BEGIN();
  RUN_TEST(test_problem1_solution);
  return UNITY_END();
}
