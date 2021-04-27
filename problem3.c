/*
 * Project Euler
 * Problem 3
 * The prime factors of 13195 are 5, 7, 13 and 29.
 *
 * What is the largest prime factor of the number 600851475143 ?
 */

#include <stdbool.h>
#include <stdio.h>
#include "problem3.h"

int problem3_solution() {
  long num = 600851475143;
  bool is_prime_number = false;

  for ( long i = 600851475142; i > 1; --i ) {
    if ( i%1000 == 0 ) {
      printf("checking %ld", i);
    }
    if ( num%i == 0 ) {
      is_prime_number = true;
      printf("checking if %ld is a prime number\n", i);
      for ( long j = 2; j < i; ++j) {
        if ( i%j == 0 ) {
          printf("%ld is not a prime number\n", i);
          is_prime_number = false;
          break;
        }
      }
      if ( is_prime_number ) {
        printf("%ld is the largest prime number of %ld", i, num);
        break;
      }
    }
  }
  printf("Done");
  return 0;
}
