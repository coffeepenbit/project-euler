#include "unity.h"
#include "problem9.h"

void test_problem9_solution(void) {
  TEST_ASSERT_EQUAL(31875000, problem9_solution());
}

void setUp(void) {}
void tearDown(void) {}

int main(void) {
  UNITY_BEGIN();
  RUN_TEST(test_problem9_solution);
  return UNITY_END();
}
