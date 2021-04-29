if [[ -z "$1" ]]; then
    echo "Error: Problem number not provided as an argument."
    exit 1
fi

new_dir=problems/problem$1
tests=tests

if [ ! -d $new_dir ]; then
    echo "Creating $new_dir"
    mkdir $new_dir
else
    echo "$new_dir already exists."
fi

problem_c_path="$new_dir/problem$1.c"
if [ ! -f $problem_c_path ]; then
    echo "Creating $problem_c_path"
    touch $problem_c_path
    echo "/*" > $problem_c_path
    echo " * Project Euler" >> $problem_c_path
    echo " * Problem $1" >> $problem_c_path
    echo " */" >> $problem_c_path
    echo "" >> $problem_c_path
    echo "#include \"problem$1.h\"" >> $problem_c_path
    echo "" >> $problem_c_path
    echo "int problem$1_solution() {" >> $problem_c_path
    echo "  return 0;" >> $problem_c_path
    echo "}" >> $problem_c_path
else
    echo "$problem_c_path already exists."
fi

problem_h_path="$new_dir/problem$1.h"
if [ ! -f $problem_h_path ]; then
    echo "Creating $problem_h_path"
    touch $problem_h_path
    echo "int problem$1_solution(void);" > $problem_h_path
else
    echo "$problem_h_path already exists."
fi

testproblem_path="$tests/TestProblem$1.c"
if [ ! -f $testproblem_path ]; then
    echo "Creating $testproblem_path"
    touch $testproblem_path
    echo "#include \"unity.h\"" > $testproblem_path
    echo "#include \"problem$1.h\"" >> $testproblem_path
    echo "" >> $testproblem_path
    echo "void test_problem5_solution(void) {" >> $testproblem_path
    echo "" >> $testproblem_path
    echo "}" >> $testproblem_path
    echo "" >> $testproblem_path
    echo "void setUp(void) {}" >> $testproblem_path
    echo "void tearDown(void) {}" >> $testproblem_path
    echo "" >> $testproblem_path
    echo "int main(void) {" >> $testproblem_path
    echo "  UNITY_BEGIN();" >> $testproblem_path
    echo "  RUN_TEST(test_problem$1_solution);" >> $testproblem_path
    echo "  return UNITY_END();" >> $testproblem_path
    echo "}" >> $testproblem_path
else
    echo "$testproblem_path already exists."
fi
