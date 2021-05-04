#include "unity.h"
#include "problem11.h"

clock_t t_begin;
double time_spent;

void test_problem11_solution(void) {
  TEST_ASSERT_EQUAL(-1, problem11_solution());
}

void setUp(void) {
  t_begin = clock();
}

void tearDown(void) {
  time_spent = (double)(clock() - t_begin) / CLOCKS_PER_SEC;
  printf("time_spent: %d\n", time_spent);
}

int main(void) {
  UNITY_BEGIN();
  RUN_TEST(test_problem11_solution);
  return UNITY_END();
}
