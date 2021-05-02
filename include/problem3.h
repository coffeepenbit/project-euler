#ifndef PROBLEM3_H_INCLUDED
#define PROBLEM3_H_INCLUDED

#include <stdbool.h>

extern unsigned long int INPUT;
extern int TEST_INPUT;
extern int TEST_OUTPUT;

int problem3_solution(unsigned long long num);
long long int largest_prime_factor_of(long long int num);
long long int *sieve_of_eratosthenes(long long int highest_num);
bool is_prime_number(unsigned long long int num_to_test);

#endif
