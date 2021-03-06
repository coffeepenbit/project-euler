#ifndef PROBLEM8_H_INCLUDED
#define PROBLEM8_H_INCLUDED

extern char INPUT[];
extern int INPUT_LENGTH;
extern int SUBNUMBER_NDIGITS;
extern int TEST_CASE_SUBNUMBER_NDIGITS;

long int problem8_solution(void);
long int array_elem_product(int array[], int size_of_array);
long int largest_product_subnumber(char input[], int length_of_input, int subnumber_ndigits);
void print_int_array(int int_array[], int int_array_length);

#endif
