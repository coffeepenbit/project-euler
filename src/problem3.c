/*
 * Project Euler
 * Problem 3
 * The prime factors of 13195 are 5, 7, 13 and 29.
 *
 * What is the largest prime factor of the number 600851475143 ?
 */

#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "problem3.h"

const long long int INPUT = 600851475143;
const int TEST_INPUT = 13195;
const int TEST_OUTPUT = 29;
const bool IS_PRIME = false;
const bool IS_UNDETERMINED_PRIMALITY = false;
const bool IS_NOT_PRIME = true;

int problem3_solution(void) {
  return largest_prime_factor_of(INPUT);
}

long long int largest_prime_factor_of(long long int num) {
  // Return largest prime factor of num
  long long int largest_prime_factor = num;
  long long int largest_sieve_number = sqrt(num);
  long long int *primes = sieve_of_eratosthenes(largest_sieve_number);

  // Determine length of primes, excluding the last -1 value
  long long int primes_ind = 0;
  long long int length_of_primes = 0;
  while (primes[primes_ind] != -1) {
    length_of_primes += 1;
    primes_ind += 1;
  }

  largest_prime_factor = num;
  bool largest_prime_factor_found = false;
  for (long long int i = 0; i < length_of_primes; ++i) {
    while (largest_prime_factor%primes[i] == 0 || largest_prime_factor_found) {
      if (largest_prime_factor == primes[i]) {
        return largest_prime_factor;
      } else {
        // Reduce number
        largest_prime_factor /= primes[i];
      }
    }
  }
  return largest_prime_factor;
}

long long int *sieve_of_eratosthenes(long long int highest_num) {
  // Find all prime numbers up to and equaling highest_num
  long long int *primes;
  bool *nums;
  long long int length_of_nums = highest_num;
  long long int malloc_size = length_of_nums * sizeof(bool);
  unsigned int number, ith_multiple, multiple;

  // Iinitialize nums
  nums = malloc(malloc_size);
  nums[0] = IS_NOT_PRIME; // 1 is not prime */
  for (int i = 1; i < length_of_nums; ++i) {
    nums[i] = IS_UNDETERMINED_PRIMALITY;
  }

  unsigned int number_ind = 1;
  unsigned int nprimes = 0;
  while (number_ind < length_of_nums) {
    if (nums[number_ind] == IS_UNDETERMINED_PRIMALITY) {
      // Number = 1 corresponds to number value 2.
      number = number_ind + 1;
      nprimes += 1;
      ith_multiple = 2;
      multiple = ith_multiple * number;
      while (multiple <= length_of_nums) {
        if (nums[multiple - 1] == IS_UNDETERMINED_PRIMALITY) {
          nums[multiple - 1] = IS_NOT_PRIME;
        }
        ith_multiple += 1;
        multiple = ith_multiple * number;
      }
    }
    number_ind += 1;
  }

  primes = malloc((nprimes + 1) * sizeof(long long int));
  int ith_prime = 0;
  for (int i = 0; i < length_of_nums; ++i) {
    if (nums[i] == IS_PRIME) {
      primes[ith_prime] = i + 1;
      ith_prime += 1;
    }
  }
  free(nums);
  primes[nprimes] = -1;

  return primes;
}

bool is_prime_number(unsigned long long num_to_test) {
  /* Return true if num_to_test is a prime number
   *
   * Worst case scenario runs at sqrt(n) time
   */
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
