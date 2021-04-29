/*
 * Project Euler
 * Problem 7
 *
 * By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see
 * that the 6th prime is 13.
 *
 * What is the 10001st prime number?
 */

#include "problem3.h"
#include "problem7.h"

int problem7_solution() {
  return nth_prime(10001);
}

int nth_prime(int nth_prime_ind) {
  int ith_prime_ind = 0;
  int number = 1;
  while (ith_prime_ind < nth_prime_ind) {
    number += 1;
    if (is_prime_number(number)) {
      ith_prime_ind += 1;
    }
  }
  return number;
}
