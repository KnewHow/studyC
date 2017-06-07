/*
 * code.c
 *
 *  Created on: Jun 7, 2017
 *      Author: ygh
 *  Show string library functions and implement them
 */
#include<stdio.h>
#include<string.h>

int myStrlen(const char *s){
	char index=0;
	while(s[index]!='\0'){
		index++;
	}
	return index;
}

void demoStrlen() {
	char a[] = "Hello";
	printf("length:%lu\n", strlen(a));
	printf("Mylength:%lu\n", myStrlen(a));
	printf("size:%lu\n", sizeof(a));
}

int main() {
	demoStrlen();
	return 0;
}

