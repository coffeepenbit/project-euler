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

long long int INPUT = 600851475143;
int TEST_INPUT = 13195;
int TEST_OUTPUT = 29;
const bool IS_PRIME = false;
const bool IS_UNDETERMINED_PRIMALITY = false;
const bool IS_NOT_PRIME = true;

int problem3_solution(void) {
  return largest_prime_factor_of(INPUT);
}

long long int largest_prime_factor_of(long long int num) {
  // Return largest prime factor of num
  //
  // That is, the largest factor of num that is prime
  long long int largest_prime_factor = num;
  long long int starting_point = floor(num/2.0);
  printf("Calling sieve\n");
  long long int *primes = sieve_of_eratosthenes(starting_point);
  printf("Sieve done\n");
  long long int length_of_nums = 1;
  long long int i = 0;

  printf("starting_point: %d\n", starting_point);
  printf("num: %d\n", num);
  printf("primes[0]: %d\n", primes[i]);
  while (primes[i] != -1) {
    length_of_nums += 1;
    i += 1;
    //printf("primes[%d]: %lld\n", i, primes[i]);
  }

  printf("length_of_nums: %d\n", length_of_nums);
  for (i = length_of_nums - 2; i >= 0; --i) {
    /* printf("i: %ld\n", i); */
    if (num%primes[i] == 0) {
      largest_prime_factor = primes[i];
      printf("found largest prime factor, primes[%d]: %d\n", i, primes[i]);
      break;
    }
  }
  printf("freeing primes\n");
  free(primes);
  printf("largest_prime_factor: %d\n", largest_prime_factor);
  return largest_prime_factor;
}

long long int *sieve_of_eratosthenes(long long int highest_num) {
  // Find all prime numbers up to and equaling highest_num
  long long int *primes;
  long long int length_of_nums = highest_num;
  long long int malloc_size = length_of_nums * sizeof(bool);
  printf("malloc on nums\n");
  // FIXME segmentation fault occurs here
  // when highest_num is large
  //
  // malloc expects size to be in BYTES;
  // sizeof also returns bytes
  printf("setting malloc number of elems: %lld\n", highest_num);
  printf("sizeof(bool): %zu\n", sizeof(bool));
  printf("sizeof(char): %zu\n", sizeof(char));
  printf("malloc size:%lld\n", length_of_nums * sizeof(bool));
  bool *nums = malloc(malloc_size);
  unsigned int number, ith_multiple, multiple;

  // initialize nums
  printf("initializing nums\n");
  /* printf("nums[0]: %d", nums[0]); */
  /* nums[0] = IS_NOT_PRIME; // 1 is not prime */
  for (int i = 1; i < length_of_nums; ++i) {
    printf("setting nums[%d]", i);
    nums[i] = IS_UNDETERMINED_PRIMALITY;
  }
  printf("done nitializing nums\n");

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

  // printf("setting primes malloc");
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
