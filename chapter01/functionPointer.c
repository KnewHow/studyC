#include<stdio.h>

int functionExecute(int (*fun)(void *a, void *b), void *a, void *b);
int compareNum(int *a,int *b);
int main () {
  /* int a =5,b=4; */
  char a = '3', b = '4';
  int r = functionExecute((int (*)(void*, void *)) compareNum, &a,&b);
  printf("r->%d",r);
  return 0;
}

int compareNum(int *a,int *b) {
  return *a - *b;
}
int functionExecute(int (*fun)(void *a, void *b), void *a, void *b) {
  return (*fun)(a,b);
}
