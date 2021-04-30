/*
 * Project Euler
 *
 * Problem: 8
 * Title: Largest product in a series
 * URL: https://projecteuler.net/problem=8
 *
 * Prompt: The four adjacent digits in the 1000-digit number that have the
 * greatest product are 9 × 9 × 8 × 9 = 5832.
 *
 * 73167176531330624919225119674426574742355349194934
 * 96983520312774506326239578318016984801869478851843
 * 85861560789112949495459501737958331952853208805511
 * 12540698747158523863050715693290963295227443043557
 * 66896648950445244523161731856403098711121722383113
 * 62229893423380308135336276614282806444486645238749
 * 30358907296290491560440772390713810515859307960866
 * 70172427121883998797908792274921901699720888093776
 * 65727333001053367881220235421809751254540594752243
 * 52584907711670556013604839586446706324415722155397
 * 53697817977846174064955149290862569321978468622482
 * 83972241375657056057490261407972968652414535100474
 * 82166370484403199890008895243450658541227588666881
 * 16427171479924442928230863465674813919123162824586
 * 17866458359124566529476545682848912883142607690042
 * 24219022671055626321111109370544217506941658960408
 * 07198403850962455444362981230987879927244284909188
 * 84580156166097919133875499200524063689912560717606
 * 05886116467109405077541002256983155200055935729725
 * 71636269561882670428252483600823257530420752963450
 *
 * Find the thirteen adjacent digits in the 1000-digit number that have the
 * greatest product. What is the value of this product?
 */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "problem8.h"

char INPUT[] = \
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
int INPUT_LENGTH = 1000;
int SUBNUMBER_NDIGITS = 13;
int TEST_CASE_SUBNUMBER_NDIGITS = 4;

int problem8_solution() {
  return largest_product_subnumber(INPUT, strlen(INPUT), SUBNUMBER_NDIGITS);
}

int largest_product_subnumber(char input[],
                              int length_of_input,
                              int subnumber_ndigits) {
  int *moving_window = malloc(subnumber_ndigits * sizeof(int));
  long moving_window_product = 1;
  long largest_product = 1;
  int largest_product_window[subnumber_ndigits];

  printf("length_of_input: %d\n", length_of_input);
  printf("subnumber_ndigits: %d\n", subnumber_ndigits);
  // printf("Input: %s\n", input);
  for (int i = 0; i < length_of_input - subnumber_ndigits + 1; ++i) {
    for (int j = 0; j < subnumber_ndigits; ++j) {
      moving_window[j] = input[i + j] - '0';
    }

    moving_window_product = array_elem_product(moving_window, subnumber_ndigits);
    if (moving_window_product > largest_product) {
      largest_product = moving_window_product;
        for (int i = 0; i < subnumber_ndigits; ++i) {
          largest_product_window[i] = moving_window[i];
        }
    // printf("moving_window: %d %d %d %d\n", moving_window[0], moving_window[1], moving_window[2], moving_window[3]);
    // printf("moving_window_product: %d\n", moving_window_product);
    }
  }
  // get substring from i to i + 12 inclusivenn
  // convert substring to int array
  //
  //
  //
  // printf("returning\n");
  /* return array_elem_product(moving_window, subnumber_ndigits); */
  printf("largest_product_window: ");
  for (int i = 0; i < subnumber_ndigits; ++i) {
    printf("%d ", largest_product_window[i]);
  }
  printf("\n");
  return largest_product;
}

int array_elem_product(int array[], int size_of_array) {
  int product = 1;
  for (int i = 0; i < size_of_array; ++i) {
    product *=  array[i];
  }
  return product;
}
