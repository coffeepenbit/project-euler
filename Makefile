CC=gcc
CFLAGS=-lm -I ./include
problems=$(wildcard ./src/problem*.c)

tests=$(subst ./tests/, , $(subst .c, , $(wildcard ./tests/TestProblem*.c)))

all: $(tests)

TestProblem10: ./tests/TestProblem10.c ./tests/unity.c ./src/problem10.c ./src/problem7.c ./src/problem3.c
	$(CC) -o $@ $^ $(CFLAGS)

TestProblem7: ./tests/TestProblem7.c ./tests/unity.c ./src/problem7.c ./src/problem3.c
	$(CC) -o $@ $^ $(CFLAGS)

TestProblem%: ./tests/TestProblem%.c ./tests/unity.c ./src/problem%.c
	$(CC) -o $@ $^ $(CFLAGS)
