/*
 * Project Euler
 *
 * Problem: 10
 * Title: Summation of primes
 * URL: https://projecteuler.net/problem=10
 *
 * Prompt:
 * The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.
 * Find the sum of all the primes below two million.
 */

#include "problem10.h"

int INPUT = 2000000;
int TEST_INPUT = 10;
int TEST_OUTPUT = 17;

int problem10_solution() {
  return 0;
}

long int sum_of_primes_below(int below_num) {
  long int sum = 0;
  unsigned int ith_prime = 1;
  unsigned int i = 1;
  while (ith_prime < below_num) {
    ith_prime = nth_prime(i);
    sum += ith_prime;
    i += 1;
  }
  return sum;
}
