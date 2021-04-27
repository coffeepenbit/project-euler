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
  TEST_ASSERT_EQUAL(0, problem3_solution());
}

void setUp (void) {}
void tearDown (void) {}

int main(void) {
  UNITY_BEGIN();
  RUN_TEST(test_problem1_solution);
  RUN_TEST(test_problem2_solution);
  // RUN_TEST(test_problem3_solution);
  return UNITY_END();
}
