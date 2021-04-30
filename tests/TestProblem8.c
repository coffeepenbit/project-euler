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
  TEST_ASSERT_EQUAL_MESSAGE(30, largest_product_subnumber(multiline_input, 6, 2), "Input: \"654\"\n\"654\", 6, 2");
    char input[] = \
    "73167176531330624919225119674426574742355349194934"
    "96983520312774506326239578318016984801869478851843"
    "85861560789112949495459501737958331952853208805511"
    "12540698747158523863050715693290963295227443043557"
    "66896648950445244523161731856403098711121722383113"
    "62229893423380308135336276614282806444486645238749"
    "30358907296290491560440772390713810515859307960866"
    "70172427121883998797908792274921901699720888093776"
    "65727333001053367881220235421809751254540594752243"
    "52584907711670556013604839586446706324415722155397"
    "53697817977846174064955149290862569321978468622482"
    "83972241375657056057490261407972968652414535100474"
    "82166370484403199890008895243450658541227588666881"
    "16427171479924442928230863465674813919123162824586"
    "17866458359124566529476545682848912883142607690042"
    "24219022671055626321111109370544217506941658960408"
    "07198403850962455444362981230987879927244284909188"
    "84580156166097919133875499200524063689912560717606"
    "05886116467109405077541002256983155200055935729725"
    "71636269561882670428252483600823257530420752963450";
    // This test case was provided by Project Euler
  TEST_ASSERT_EQUAL_MESSAGE(5832, largest_product_subnumber(input, 1000, 4), "Input: 1000-digit input, 1000, 4");
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
