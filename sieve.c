#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "sieve.h"

int sieve(int targetPrime){
  if(targetPrime == 1){
    return 2;
  }
  int buckets = (int)(2 * log(targetPrime) * targetPrime);
  short * values = calloc(buckets, sizeof(short));
  int counter = 0;
  int prime = 0;
  values[0] = -1;
  values[1] = -1;
  for(int x = 2; x < buckets; x++){
    if (x % 2 == 0 && x != 2){
      values[x] = 1;
    }
  }

  for (int y = 3; y < buckets; y++){
    if(y % 2 == 0){
      continue;
    }
    if(values[y] == 0){
      for(int p = y; p < buckets; p++){
        if ((p % y == 0 && p != y) && values[p] != 1){
          values[p] = 1;
        }
      }
    }
  }


  for(int i = 2; i < buckets; i++){
    if(i % 2 == 0 && i != 2){
      continue;
    }
    if (values[i] == 0){
      counter++;
    }
    if (counter == targetPrime){
      prime = i;
      break;
    }
  }
  free(values);
  return prime;
}
