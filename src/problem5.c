/*
 * Project Euler
 * Problem 5
 *
 * 2520 is the smallest number that can be divided by each of the numbers from
 * 1 to 10 without any remainder.
 *
 * What is the smallest positive number that is evenly divisible by all of the
 * numbers from 1 to 20?
 *
 */

#include <stdbool.h>
#include "problem5.h"

int problem5_solution(int div_min, int div_max) {
  bool divisible = false;
  int num = div_max;
  while (!divisible) {
    for (int i = div_min; i <= div_max; ++i) {
      if (num%i != 0) {
        num += 1;
        break;
      } else if (i == div_max) {
        divisible = true;
      }
    }

  }
  return num;
}
