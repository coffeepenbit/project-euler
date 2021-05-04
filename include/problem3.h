#ifndef PROBLEM3_H_INCLUDED
#define PROBLEM3_H_INCLUDED

#include <stdbool.h>

extern const long long int PROBLEM3_INPUT;
extern const int PROBLEM3_TEST_INPUT;
extern const int PROBLEM3_TEST_OUTPUT;

int problem3_solution(void);
long long int largest_prime_factor_of(long long int num);
long long int *sieve_of_eratosthenes(long long int highest_num);
bool is_prime_number(unsigned long long int num_to_test);

#endif
