CC=gcc
CFLAGS=-lm -I ./include
problems=$(wildcard ./src/problem*.c)

tests=$(subst ./tests/, , $(subst .c, , $(wildcard ./tests/TestProblem*.c)))

all: $(tests)
	echo $(tests)

TestProblem%: ./tests/TestProblem%.c ./tests/unity.c $(problems)
	$(CC) -o $@ $^ $(CFLAGS)
