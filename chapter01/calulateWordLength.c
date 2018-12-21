#include<stdio.h>
# define MAX_SIZE 100

void printLevel(int counter, int words[][MAX_SIZE], int count[]);
void printVertical(int counter, int words[][MAX_SIZE], int count[]);

int main() {
  int sum=0,i=0,c,j=0;
  int count[MAX_SIZE];
  int words [MAX_SIZE][MAX_SIZE];
  while((c = getchar()) != EOF) {
    if (c == '\n') {
      words[i][j] = '\n';
      count[i] = sum;
      j = 0;
      i++;
      sum = 0;
    } else {
      words[i][j] = c;
      sum++;
      j++;
    }
  }
  printVertical(i, words,count);
  return 0;
}

void printLevel(int counter, int words[][100], int count[]) {
  for(int j = 0; j < counter; j++) {
    for (int k = 0; k < count[j]; k++) {
      printf("%c",words[j][k]);
    }
    printf(": ");
    for (int k = 0; k < count[j]; k++) {
      printf("*");
    }
    printf("\n");
  }
}

void printVertical(int counter, int words[][MAX_SIZE], int count[]) {
  for (int i = 0; i < counter; i++) {
    for (int j = 0; j < count[i]; j++) {
      printf("%c", words[i][j]);
    }
    printf(" ");
  }

  printf("\n");
  int flag = 1;
  int j = 0;
  while(flag == 1) {
    flag = 0;
    for (int i = 0; i < counter; i++) {
      if (count[i] > j) {
        flag = 1;
        printf("*\t");
      } else {
         printf(" \t");
      }
    }
    j++;
    printf("\n");
  }
}
