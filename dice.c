#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
  char name[10];
  srand(time(NULL));
  
  int dice1,dice2;
  printf("What is your name?\n> ");
  scanf("%s",name);
  printf("Hello, %s!\n",name);

  printf("Rolling the dice...\n");
  dice1 = rand() % 6 +1;
  dice2 = rand() % 6 +1;
  
  printf("Die 1: %d\n",dice1);
  printf("Die 2: %d\n",dice2);
  printf("Total value: %d\n",dice1+dice2);
  if(dice1+dice2>=7) printf("%s won!\n",name);
  else printf("%s lost!\n",name);
  return 0;
}

