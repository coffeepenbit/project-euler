/*
 * Project Euler
 * Problem 4
 *
 * A palindromic number reads the same both ways. The largest palindrome made
 * from the product of two 2-digit numbers is 9009 = 91 × 99.  Find the largest
 * palindrome made from the product of two 3-digit numbers.
 */

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "problem4.h"

int problem4_solution(int ndigits) {
  int largest_palindrome;
  int largest_number = largest_ndigit_number(ndigits);
  int largest_product = largest_number * largest_number;
  int smallest_possible_palindrome = 11;

  for (int i = smallest_possible_palindrome; i <= largest_product; ++i) {
    if (is_palindrome_number(i) && is_product_of_2_ndigit(ndigits, i)) {
      largest_palindrome = i;
    }
  }
  return largest_palindrome;
}

bool is_product_of_2_ndigit(int ndigits, int number) {
  bool product_of_2_ndigit = false;
  int divided_num;
  for (int i =  smallest_ndigit_number(ndigits); i <= largest_ndigit_number(ndigits); ++i) {
    if (number%i == 0) {
      divided_num = number / i;
      for (int i =  smallest_ndigit_number(ndigits); i <= largest_ndigit_number(ndigits); ++i) {
        if (divided_num/i == 0) {
          product_of_2_ndigit = true;
        }
      }
    }
  }
  return product_of_2_ndigit;
}

int largest_ndigit_number(int ndigits) {
  int number = 0;
  for (int i = ndigits; i > 0; --i) {
    number += 9 * pow(10, i - 1);
  }
  return number;
}

int smallest_ndigit_number(int ndigits) {
  return pow(10, ndigits - 1);
}

bool is_palindrome_number(int number) {
  int nlength = length_of_number(number);
  bool palindrome = true;
  int left_digit, right_digit;

  for (int i = 0; i < nlength; ++i) {
    left_digit = nth_digit(nlength - i - 1, number);
    right_digit = nth_digit(i, number);
    if (left_digit != right_digit) {
      palindrome = false;
    }
  }
  return palindrome;
}

int length_of_number(int number) {
  return floor(log10(abs(number))) + 1;
}

int nth_digit(int position, int number) {
  number = number/pow(10, position);
  return number % 10;
}
