/*
 * Project Euler
 *
 * Problem: 9
 * Title: Special Pythagorean triplet
 * URL: https://projecteuler.net/problem=9
 *
 * Prompt: A Pythagorean triplet is a set of three natural numbers, a < b < c,
 * for which, a**2 + b**2 = c**2
 *
 * For example, 3**2 + 4**2 = 9 + 16 = 25 = 5**2
 *
 * There exists only one Pythagorean triplet for which a + b + c = 1000
 *
 * Find the product of a*b*c
 */

#include <math.h>
#include <stdio.h>
#include "problem9.h"

unsigned int problem9_solution() {
  int a = 1;
  float b = 1;
  float c = 1;

  for (int i = 1; i <= 500; ++i) {
    a = i;
    b = 1.0 * 1000 * (a - 500) / (a - 1000);
    c = ((a*a - 1000*a + 500000)) / (1000 - a);

    if (((a + b + c) == 1000)
        && ((pow(a, 2) + pow(b, 2)) == pow(c, 2))
        && (a >= 1)
        && (b >= 1)
        && (c >= 1)) {
        printf("a: %d\n", a);
        printf("b: %d\n", (int)b);
        printf("c: %f\n", (int)c);
        return a*b*c;
    }
  }
}
