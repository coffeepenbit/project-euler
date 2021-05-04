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

#include <stdbool.h>
#include <stdio.h>
#include "problem3.h"
#include "problem10.h"

int PROBLEM10_INPUT = 2000000;
int PROBLEM10_TEST_INPUT = 10;
int PROBLEM10_TEST_OUTPUT = 17;

long int problem10_solution() {
  return sum_of_primes_below(PROBLEM10_INPUT);
}

long int sum_of_primes_below(int below_num) {
  long long int *primes = sieve_of_eratosthenes(below_num);

  long int prime_ind = 0;
  long long int sum = 0;
  while (primes[prime_ind] != -1) {
    sum += primes[prime_ind];
    prime_ind += 1;
  }
  return sum;
}
