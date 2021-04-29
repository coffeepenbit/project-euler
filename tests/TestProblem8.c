#include "unity.h"
#include "problem8.h"

void test_problem8_solution(void) {

}

void test_problem8_array_elem_product(void) {
  TEST_ASSERT_EQUAL_MESSAGE(1, array_elem_product((int[1]){1}, 1), "Input: {1}, 1");
  TEST_ASSERT_EQUAL_MESSAGE(2, array_elem_product((int[2]){1, 2}, 2), "Input: {1, 2}, 2");
  TEST_ASSERT_EQUAL_MESSAGE(6, array_elem_product((int[3]){1, 2, 3}, 3), "Input: {1, 2, 3}, 3");
}

void test_problem8_largest_product_subnumber(void) {
  TEST_ASSERT_EQUAL_MESSAGE(1, largest_product_subnumber("1", 1, 1), "Input: \"1\", 1, 1");
}


void setUp(void) {}
void tearDown(void) {}

int main(void) {
  UNITY_BEGIN();
  RUN_TEST(test_problem8_solution);
  RUN_TEST(test_problem8_array_elem_product);
  RUN_TEST(test_problem8_largest_product_subnumber);
  return UNITY_END();
}
