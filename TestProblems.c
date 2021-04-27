#include <stdbool.h>
#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include "unity.h"
#include "problem1.h"
#include "problem2.h"
#include "problem3.h"

clock_t t_begin, t_end;
double t_spent = 0.0;

void test_problem1_solution(void) {
  TEST_ASSERT_EQUAL(233168, problem1_solution());
}

void test_problem2_solution(void) {
  TEST_ASSERT_EQUAL(4613732, problem2_solution());
}

void test_problem3_solution(void) {
  TEST_ASSERT_EQUAL(2, problem3_solution(4));
  TEST_ASSERT_EQUAL(3, problem3_solution(6));
  TEST_ASSERT_EQUAL(7, problem3_solution(7));
  TEST_ASSERT_EQUAL(13, problem3_solution(13));
  printf("Input: 5\n");
  TEST_ASSERT_EQUAL(5, problem3_solution(25));
  printf("Input: 7\n");
  TEST_ASSERT_EQUAL(7, problem3_solution(70));
  TEST_ASSERT_EQUAL(5, problem3_solution(1000));
  TEST_ASSERT_EQUAL(5, problem3_solution(10000));
  TEST_ASSERT_EQUAL(5, problem3_solution(100000));
  TEST_ASSERT_EQUAL(1397329, problem3_solution(60085147));
  // Solution is 6857
  // Takes about 20 minutes
  TEST_ASSERT_EQUAL(6857, problem3_solution(600851475143));
}

void test_problem3_is_prime_number(void) {
  TEST_ASSERT_EQUAL(true, is_prime_number(1));
  TEST_ASSERT_EQUAL(true, is_prime_number(2));
  TEST_ASSERT_EQUAL(true, is_prime_number(3));
  TEST_ASSERT_EQUAL(false, is_prime_number(4));
  TEST_ASSERT_EQUAL(true, is_prime_number(5));
  TEST_ASSERT_EQUAL(false, is_prime_number(6));
  TEST_ASSERT_EQUAL(true, is_prime_number(7));
  TEST_ASSERT_EQUAL(false, is_prime_number(35));
}

void setUp (void) {
  t_begin = clock();
}
void tearDown (void) {
  t_end = clock();
  t_spent += 1.0*(t_end - t_begin) / CLOCKS_PER_SEC;
  printf("Time spent: %e\n", t_spent);
}

int main(void) {
  UNITY_BEGIN();
  RUN_TEST(test_problem1_solution);
  RUN_TEST(test_problem2_solution);
  RUN_TEST(test_problem3_solution);
  RUN_TEST(test_problem3_is_prime_number);
  return UNITY_END();
}
