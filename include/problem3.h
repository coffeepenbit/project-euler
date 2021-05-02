#ifndef PROBLEM3_H_INCLUDED
#define PROBLEM3_H_INCLUDED

#include <stdbool.h>

extern unsigned long int INPUT;
extern int TEST_INPUT;
extern int TEST_OUTPUT;

int problem3_solution(unsigned long num);
int largest_prime_factor_of(int num);
int *sieve_of_eratosthenes(int highest_num);
bool is_prime_number(unsigned long num_to_test);

#endif
