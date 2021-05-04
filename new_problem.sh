if [[ -z "$1" ]]; then
    echo "Error: Problem number not provided as an argument."
    exit 1
fi

src_dir=src
h_dir=include
test_dir=tests

problem_c_path="$src_dir/problem$1.c"
if [ ! -f $problem_c_path ]; then
    echo "Creating $problem_c_path"
    touch $problem_c_path
    echo "/*" > $problem_c_path
    echo " * Project Euler" >> $problem_c_path
    echo " *" >> $problem_c_path
    echo " * Problem: $1" >> $problem_c_path
    echo " * Title: " >> $problem_c_path
    echo " * URL: https://projecteuler.net/problem=$1" >> $problem_c_path
    echo " *" >> $problem_c_path
    echo " * Prompt: " >> $problem_c_path
    echo " */" >> $problem_c_path
    echo "" >> $problem_c_path
    echo "#include \"problem$1.h\"" >> $problem_c_path
    echo "" >> $problem_c_path
    echo "int PROBLEM$1_INPUT = 1;" >> $problem_c_path
    echo "" >> $problem_c_path
    echo "int problem$1_solution() {" >> $problem_c_path
    echo "  return 0;" >> $problem_c_path
    echo "}" >> $problem_c_path
else
    echo "$problem_c_path already exists."
fi

problem_h_path="$h_dir/problem$1.h"
if [ ! -f $problem_h_path ]; then
    echo "Creating $problem_h_path"
    touch $problem_h_path
    echo "#ifndef PROBLEM$1_H_INCLUDED" > $problem_h_path
    echo "#define PROBLEM$1_H_INCLUDED" >> $problem_h_path
    echo "" >> $problem_h_path
    echo "int problem$1_solution(void);" >> $problem_h_path
    echo "" >> $problem_h_path
    echo "extern int PROBLEM$1_INPUT;" >> $problem_h_path
    echo "" >> $problem_h_path
    echo "#endif" >> $problem_h_path
else
    echo "$problem_h_path already exists."
fi

testproblem_path="$test_dir/TestProblem$1.c"
if [ ! -f $testproblem_path ]; then
    echo "Creating $testproblem_path"
    touch $testproblem_path
    echo "#include \"<stdio.h>\"" > $testproblem_path
    echo "#include \"<time.h>\"" > $testproblem_path
    echo "#include \"unity.h\"" > $testproblem_path
    echo "#include \"problem$1.h\"" >> $testproblem_path
    echo "" >> $testproblem_path
    echo "clock_t t_begin;" >> $testproblem_path
    echo "double time_spent;" >> $testproblem_path
    echo "" >> $testproblem_path
    echo "void test_problem$1_solution(void) {" >> $testproblem_path
    echo "  TEST_ASSERT_EQUAL(-1, problem$1_solution());" >> $testproblem_path
    echo "}" >> $testproblem_path
    echo "" >> $testproblem_path
    echo "void setUp(void) {" >> $testproblem_path
    echo "  t_begin = clock();" >> $testproblem_path
    echo "}" >> $testproblem_path
    echo "" >> $testproblem_path
    echo "void tearDown(void) {" >> $testproblem_path
    echo "  time_spent = (double)(clock() - t_begin) / CLOCKS_PER_SEC;" >> $testproblem_path
    echo "  printf(\"time_spent: %d\n\", time_spent);" >> $testproblem_path
    echo "}" >> $testproblem_path
    echo "" >> $testproblem_path
    echo "int main(void) {" >> $testproblem_path
    echo "  UNITY_BEGIN();" >> $testproblem_path
    echo "  RUN_TEST(test_problem$1_solution);" >> $testproblem_path
    echo "  return UNITY_END();" >> $testproblem_path
    echo "}" >> $testproblem_path
else
    echo "$testproblem_path already exists."
fi
