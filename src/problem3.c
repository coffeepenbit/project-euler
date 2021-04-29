/*
 * Project Euler
 * Problem 3
 * The prime factors of 13195 are 5, 7, 13 and 29.
 *
 * What is the largest prime factor of the number 600851475143 ?
 */

#include <stdbool.h>
#include <stdio.h>
#include <math.h>
#include "problem3.h"

int problem3_solution(unsigned long num) {
  long largest_prime = num;

  for ( long i = ceil(num/2.0); i > 1; --i ) {
    // NOTE: A prime factor is a prime number that is a factor of a number
    if ( (num%i == 0) && (is_prime_number(i)) ) {
      largest_prime = i;
      break;
    }
  }
  return largest_prime;
}

bool is_prime_number(unsigned long num_to_test) {
  bool prime;
  float sqrt_n = sqrt(num_to_test);
  long i = 1;

  if ((num_to_test == 2) || (num_to_test == 3)) {
    prime = true;
  } else if ((num_to_test == 1) || (num_to_test%2 == 0) || (num_to_test%3 == 0)) {
    prime = false;
  } else {
    prime = true;
    while (((6*i - 1) <= sqrt_n) && prime == true) {
      for ( int k = -1; k <= 4; ++k ) {
        if (num_to_test%(6*i + k) == 0) {
          prime = false;
          break;
        }
      }
      i += 1;
    }
  }
  return prime;
}
