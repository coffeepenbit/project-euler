/*
 * Project Euler
 * Problem 2
 * Each new term in the Fibonacci sequence is generated
 * by adding the previous two terms. By starting with 1 and 2, the first 10
 * terms will be:
 *
 * 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...
 *
 * By considering the terms in the
 * Fibonacci sequence whose values do not exceed four million, find the sum of
 * the even-valued terms.
 */

#include <stdio.h>

int main() {
  int i = 1;
  int j = 2;
  int j_old = 2;
  int sum = 0;

  while ( j < 4e6 ) {
    if ( j%2 == 0) {
      sum += j;
    }
    j_old = j;
    j = i + j;
    i = j_old;
  }
  printf("Sum of even terms: %d", sum);
  return 0;
}
