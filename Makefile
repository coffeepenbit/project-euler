CC=gcc
CFLAGS=-lm -I ./include
problems=./src/problem*.c

TestProblem%: ./tests/TestProblem%.c ./tests/unity.c $(problems)
	$(CC) -o $@ $^ $(CFLAGS)
