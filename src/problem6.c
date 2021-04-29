/*
 * Project Euler
 * Problem 6
 * https://projecteuler.net/problem=6
 *
 * The sum of the squares of the first ten natural numbers is ""
 * The square of the sum of the first ten natural numbers is ""
 *
 * Hence the difference between the sum of the squares of the first ten
 * natural numbers and the square of the sum is Find the difference between the
 * sum of the squares of the first one hundred natural numbers and the square
 * of the sum.
 */

#include "problem6.h"

int problem6_solution(int n) {
  int square_of_sum = sum_of_n_consecutive_ints(n) * sum_of_n_consecutive_ints(n);
  int sum_of_squares = sum_of_n_consecutive_squares(n);

  return square_of_sum - sum_of_squares;
}

int sum_of_n_consecutive_squares(int n) {
  int sum = 0;
  for (int i = 1; i <= n; ++i) {
    sum += i*i;
  }
  return sum;
}

int sum_of_n_consecutive_ints(int n) {
  return n * (n + 1) / 2;
}
