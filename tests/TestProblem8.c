#include <string.h>
#include "unity.h"
#include "problem8.h"

void test_problem8_solution(void) {
  TEST_ASSERT_EQUAL(2091059712, problem8_solution());
}

void test_problem8_largest_product_subnumber(void) {
  TEST_ASSERT_EQUAL_MESSAGE(1, largest_product_subnumber("1", 1, 1), "Input: \"1\", 1, 1");
  TEST_ASSERT_EQUAL_MESSAGE(2, largest_product_subnumber("2", 1, 1), "Input: \"2\", 1, 1");
  TEST_ASSERT_EQUAL_MESSAGE(6, largest_product_subnumber("123", 3, 3), "Input: \"123\", 3, 3");
  TEST_ASSERT_EQUAL_MESSAGE(6, largest_product_subnumber("123", 3, 2), "Input: \"123\", 3, 2");
  TEST_ASSERT_EQUAL_MESSAGE(3, largest_product_subnumber("123", 3, 1), "Input: \"123\", 3, 2");
  char multiline_input[] = \
    "123"
    "456";
  TEST_ASSERT_EQUAL_MESSAGE(360, largest_product_subnumber(multiline_input, 6, 4), "Input: \"123\"\n\"456\", 6, 4");
  strcpy(multiline_input, "654"
                          "321");
  TEST_ASSERT_EQUAL_MESSAGE(360, largest_product_subnumber(multiline_input, 6, 4), "Input: \"123\"\n\"456\", 6, 4");
  strcpy(multiline_input, "446"
                          "544");
  TEST_ASSERT_EQUAL_MESSAGE(30, largest_product_subnumber(multiline_input, 6, 2), "Input: \"446\"\n\"544\", 6, 2");
  TEST_ASSERT_EQUAL_MESSAGE(5832, largest_product_subnumber(INPUT, INPUT_LENGTH, TEST_CASE_SUBNUMBER_NDIGITS), "Input: 1000-digit input, 1000, 4");
}

void test_problem8_array_elem_product(void) {
  TEST_ASSERT_EQUAL_MESSAGE(1, array_elem_product((int[1]){1}, 1), "Input: {1}, 1");
  TEST_ASSERT_EQUAL_MESSAGE(2, array_elem_product((int[2]){1, 2}, 2), "Input: {1, 2}, 2");
  TEST_ASSERT_EQUAL_MESSAGE(6, array_elem_product((int[3]){1, 2, 3}, 3), "Input: {1, 2, 3}, 3");
}

void setUp(void) {}
void tearDown(void) {}

int main(void) {
  UNITY_BEGIN();
  RUN_TEST(test_problem8_solution);
  RUN_TEST(test_problem8_largest_product_subnumber);
  RUN_TEST(test_problem8_array_elem_product);
  return UNITY_END();
}
