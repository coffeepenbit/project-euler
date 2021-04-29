CC=gcc
CFLAGS=-lm -I ./include

TestProblem%: ./tests/TestProblem%.c ./tests/unity.c ./src/problem%.c
	$(CC) -o $@ $^ $(CFLAGS)
