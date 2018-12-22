#include<stdio.h>

void myStrcpy(char *s, char *t);
int main () {
  char *t = "Hello, world";
  char arr[100];
  char *s = arr;
  myStrcpy(s,t);
  printf("s->:%s\n",arr);
  return 0;
}

void myStrcpy(char *s, char *t) {
  while(*s++ = *t++)
    ;
}
