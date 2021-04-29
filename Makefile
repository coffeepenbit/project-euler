CC=gcc
CFLAGS=-lm -I ./include

TestProblem%: ./tests/TestProblem%.c ./tests/unity.c ./src/problem%.c
	$(CC) -o $@ $^ $(CFLAGS)

# TODO: establish % patterns
TestProblem1: ./tests/TestProblem1.c ./tests/unity.c ./src/problem1.c
	$(CC) $(CFLAGS) -o $@ @^

TestProblem2: ./tests/TestProblem2.c ./tests/unity.c ./src/problem2.c
	$(CC) $(CFLAGS) -o $@ @^

TestProblem3: ./tests/TestProblem3.c ./tests/unity.c ./src/problem3.c
	$(CC) $(CFLAGS) -o $@ $^

TestProblem4: ./tests/TestProblem4.c ./tests/unity.c ./src/problem4.c
	$(CC) $(CFLAGS) -o $@ $^

TestProblem5: ./tests/TestProblem5.c ./tests/unity.c ./src/problem5.c
	$(CC) $(CFLAGS) -o $@ $^

TestProblem6: ./tests/TestProblem6.c ./tests/unity.c ./src/problem6.c
	$(CC) $(CFLAGS) -o $@ $^
