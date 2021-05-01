#include <stdbool.h>
#include <stdio.h>
#include <time.h>
#include "unity.h"
#include "problem3.h"

clock_t t_begin;
double time_spent;

void test_problem3_solution(void) {
  TEST_ASSERT_EQUAL(2, problem3_solution(4));
  TEST_ASSERT_EQUAL(3, problem3_solution(6));
  TEST_ASSERT_EQUAL(7, problem3_solution(7));
  TEST_ASSERT_EQUAL(13, problem3_solution(13));
  TEST_ASSERT_EQUAL(5, problem3_solution(25));
  TEST_ASSERT_EQUAL(7, problem3_solution(70));
  TEST_ASSERT_EQUAL(5, problem3_solution(1000));
  TEST_ASSERT_EQUAL(5, problem3_solution(10000));
  TEST_ASSERT_EQUAL(5, problem3_solution(100000));
  // FIXME this solution takes 20 minutes
  // TEST_ASSERT_EQUAL(6857, problem3_solution(600851475143));
}

void test_problem3_largest_prime_number_of(void) {
  TEST_ASSERT_EQUAL(2, largest_prime_number_of(4));
  TEST_ASSERT_EQUAL(3, largest_prime_number_of(6));
  TEST_ASSERT_EQUAL(7, largest_prime_number_of(7));
  TEST_ASSERT_EQUAL(13, largest_prime_number_of(13));
}

void test_problem3_is_prime_number(void) {
  TEST_ASSERT_EQUAL_MESSAGE(false, is_prime_number(1), "Input: 1");
  TEST_ASSERT_EQUAL_MESSAGE(true, is_prime_number(2), "Input: 2");
  TEST_ASSERT_EQUAL_MESSAGE(true, is_prime_number(3), "Input: 3");
  TEST_ASSERT_EQUAL_MESSAGE(false, is_prime_number(4), "Input: 4");
  TEST_ASSERT_EQUAL_MESSAGE(true, is_prime_number(5), "Input: 5");
  TEST_ASSERT_EQUAL_MESSAGE(false, is_prime_number(6), "Input: 6");
  TEST_ASSERT_EQUAL_MESSAGE(true, is_prime_number(7), "Input: 7");
  TEST_ASSERT_EQUAL_MESSAGE(false, is_prime_number(35), "Input: 35");
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
  RUN_TEST(test_problem3_solution);
  RUN_TEST(test_problem3_largest_prime_number_of);
  RUN_TEST(test_problem3_is_prime_number);
  return UNITY_END();
}
