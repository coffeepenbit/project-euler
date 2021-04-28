CC=gcc
problems=problem1.c \
		 problem2.c \
         problem3.c

# TODO: breakup this into separate problems
TestProblems: TestProblems.c unity.c $(problems) -lm

TestProblem%: TestProblem%.c unity.c problem%.c
	$(CC) -o $@ $^ -lm
