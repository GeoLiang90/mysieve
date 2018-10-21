#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "sieve.h"
int main(){

  printf("Finding the 1st prime number: %d \n",sieve(1));
  printf("Finding the 3rd prime number: %d \n",sieve(3));
  printf("Finding the 100th prime number: %d \n",sieve(100));
  printf("Finding the 300th prime number: %d \n",sieve(300));
  return 0;
}
