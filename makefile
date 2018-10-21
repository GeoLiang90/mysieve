all: sieve.o driver.o sieve.h
	gcc -o output driver.o sieve.o -lm

sieve.o: sieve.c sieve.h
	gcc -c sieve.c -lm

driver.o: sieve.h
	gcc -c driver.c

run:
	./output
