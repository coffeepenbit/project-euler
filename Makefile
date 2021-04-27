CC=gcc
problems=problem1.c \
		 problem2.c \
         problem3.c

TestProblems: TestProblems.c unity.c $(problems)
