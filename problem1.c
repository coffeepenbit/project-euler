/*
 * Project Euler
 * Problem 1
 * If we list all the natural numbers below 10 that are
 * multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
 * Find the sum of all the multiples of 3 or 5 below 1000
 */

#include <stdio.h>
#include "problem1.h"

int problem1_solution() {
  int sum = 0;
  int up_to = 1000;
  int multiple1 = 3;
  int multiple2 = 5;

  for ( int i = 1; i < up_to; ++i ) {
    if ( (i%multiple1 == 0) || ( i%multiple2 == 0) ) {
      sum += i;
    }
  }
  return sum;
}
