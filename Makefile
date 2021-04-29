CC=gcc

# TODO: establish % patterns
TestProblem1: ./tests/TestProblem1.c ./tests/unity.c ./problems/problem1/problem1.c
	$(CC) -o TestProblem1 ./tests/TestProblem1.c ./tests/unity.c ./problems/problem1/problem1.c -lm -I ./problems/problem1

TestProblem2: ./tests/TestProblem2.c ./tests/unity.c ./problems/problem2/problem2.c
	$(CC) -o TestProblem2 ./tests/TestProblem2.c ./tests/unity.c ./problems/problem2/problem2.c -lm -I ./problems/problem2

TestProblem3: ./tests/TestProblem3.c ./tests/unity.c ./problems/problem3/problem3.c
	$(CC) -o TestProblem3 ./tests/TestProblem3.c ./tests/unity.c ./problems/problem3/problem3.c -lm -I ./problems/problem3

TestProblem4: ./tests/TestProblem4.c ./tests/unity.c ./problems/problem4/problem4.c
	$(CC) -o TestProblem4 ./tests/TestProblem4.c ./tests/unity.c ./problems/problem4/problem4.c -lm -I ./problems/problem4

TestProblem5: ./tests/TestProblem5.c ./tests/unity.c ./problems/problem5/problem5.c
	$(CC) -o TestProblem5 ./tests/TestProblem5.c ./tests/unity.c ./problems/problem5/problem5.c -lm -I ./problems/problem5

TestProblem6: ./tests/TestProblem6.c ./tests/unity.c ./problems/problem6/problem6.c
	$(CC) -o TestProblem6 ./tests/TestProblem6.c ./tests/unity.c ./problems/problem6/problem6.c -lm -I ./problems/problem6
