#include "unity.h"
#include "problem2.h"

void test_problem2_solution(void) {
  TEST_ASSERT_EQUAL(4613732, problem2_solution());
}

void setUp(void) {}
void tearDown(void) {}

int main(void) {
  UNITY_BEGIN();
  RUN_TEST(test_problem2_solution);
  return UNITY_END();
}
