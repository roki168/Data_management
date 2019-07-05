#include <stdio.h>
#include <stdlib.h>
int GetRandom(int min,int max){
  return min + (int)rand()*(max-min+1.0)/(1.0+RAND_MAX);
}
int main(){
  int dice1,dice2;
  dice1 = GetRandom(1,6);
  dice2 = GetRandom(1,6);
  printf("Die 1: %d\n",dice1);
  printf("Die 2: %d\n",dice2);
  printf("Total value: %d\n",dice1+dice2);
  return 0;
}

