#include <stdbool.h>
#include "unity.h"
#include "problem4.h"

void test_problem4_solution(void) {
  TEST_ASSERT_EQUAL_MESSAGE(9009, problem4_solution(2), "Input: 2");
  TEST_ASSERT_EQUAL_MESSAGE(906609, problem4_solution(3), "Input: 3");
}

void test_problem4_is_palindrome_number(void) {
  TEST_ASSERT_FALSE_MESSAGE(is_palindrome_number(12), "Input: 12");
  TEST_ASSERT_TRUE_MESSAGE(is_palindrome_number(11), "Input: 11");
}

void test_problem4_is_product_of_2_ndigit(void) {
  TEST_ASSERT_TRUE_MESSAGE(is_product_of_2_ndigit(2, 9009), "Input: 2, 9009");
  TEST_ASSERT_FALSE_MESSAGE(is_product_of_2_ndigit(2, 9779), "Input: 2, 9779");
}

void test_problem4_smallest_ndigit_number(void) {
  TEST_ASSERT_EQUAL_MESSAGE(1, smallest_ndigit_number(1), "Input: 1");
  TEST_ASSERT_EQUAL_MESSAGE(10, smallest_ndigit_number(2), "Input: 2");
  TEST_ASSERT_EQUAL_MESSAGE(100, smallest_ndigit_number(3), "Input: 3");
}

void test_problem4_largest_ndigit_number(void) {
  TEST_ASSERT_EQUAL_MESSAGE(9, largest_ndigit_number(1), "Input: 1");
  TEST_ASSERT_EQUAL_MESSAGE(99, largest_ndigit_number(2), "Input: 2");
  TEST_ASSERT_EQUAL_MESSAGE(999, largest_ndigit_number(3), "Input: 3");
}

void test_problem4_nth_digit(void) {
  TEST_ASSERT_EQUAL_MESSAGE(1, nth_digit(0, 1), "Input: 0, 1");
  TEST_ASSERT_EQUAL_MESSAGE(2, nth_digit(0, 12), "Input: 0, 12");
  TEST_ASSERT_EQUAL_MESSAGE(1, nth_digit(1, 12), "Input: 1, 12");
}

void test_problem4_length_of_number(void) {
  TEST_ASSERT_EQUAL_MESSAGE(1, length_of_number(1), "Input: 1");
  TEST_ASSERT_EQUAL_MESSAGE(2, length_of_number(12), "Input: 12");
  TEST_ASSERT_EQUAL_MESSAGE(3, length_of_number(123), "Input: 123");
}

void setUp (void) {}
void tearDown (void) {}

int main(void) {
  UNITY_BEGIN();
  RUN_TEST(test_problem4_solution);
  RUN_TEST(test_problem4_is_palindrome_number);
  RUN_TEST(test_problem4_is_product_of_2_ndigit);
  RUN_TEST(test_problem4_largest_ndigit_number);
  RUN_TEST(test_problem4_smallest_ndigit_number);
  RUN_TEST(test_problem4_nth_digit);
  RUN_TEST(test_problem4_length_of_number);
  return UNITY_END();
}
