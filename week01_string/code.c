/*
 * code.c
 *
 *  Created on: Jun 7, 2017
 *      Author: ygh
 *  Show string library functions and implement them
 */
#include<stdio.h>
#include<string.h>
#include <stdlib.h>

int myStrlen(const char *s) {
	char index = 0;
	while (s[index]) {
		index++;
	}
	return index;
}

void demoStrlen() {
	char a[] = "Hello";
	printf("length:%lu\n", strlen(a));
	printf("Mylength:%d\n", myStrlen(a));
	printf("size:%lu\n", sizeof(a));
}

int myStcCmp(const char *s1, const char *s2) {
	while (*s1 == *s2 && *s1 != '\0') {
		s1++;
		s2++;
	}
	return *s1 - *s2;
}

void demoStrCmp() {
	char s1[] = "Abc";
	char s2[] = "abc";
	printf("%d\n", strcmp(s1, s2));
	printf("%d\n", myStcCmp(s1, s2));
}

/**
 * A simply string copy method
 */
char* myStrCpy(char *dst, const char *res) {
	char *p = dst;
	while (*res) {
		*dst++ = *res++;
	}
	*dst = '\0';
	return p;
}

/**
 * demo strcpy method
 * char * strcpy (char *restrict to, const char *restrict from)
 * restrict:a modifier to char* indicating to mustn't overlap with
 * from in Multi-core System.
 * return char* is same with to,it add this in order to write code
 * continuous for example calculate the length of b strlen(strcpy(a,b));
 */
void demoStrCpy() {
	char s1[] = "Hello";
	char *s2 = (char *) malloc(strlen(s1) + 1);
	char *s3 = (char *) malloc(strlen(s1) + 1);
	strcpy(s2, s1);
	myStrCpy(s3, s1);
	printf("s1=%s\n", s1);
	printf("s2=%s\n", s2);
	printf("s3=%s\n", s3);
	free(s2);
	free(s3);
}

/**
 * Demo string search method
 * strChr will find the char first appear position
 */
void demoStrChr() {
	char s1[] = "Hello";
	char *p = strchr(s1, 'l');
	/*
	 * Get the second position
	 */
//	p = strchr(p+1,'l');
	/**
	 * Get the string followed p
	 */
	char *dst = (char *) malloc(sizeof(p) + 1);
	strcpy(dst, p);
	/*
	 * Get the string before p
	 */
	char c = *p;
	*p = '\0';
	strcpy(dst, s1);
	/**
	 * recover the string s1
	 */
	*p = c;
	printf("p=%s\n", p);
	printf("dst=%s\n", dst);
}

char * myStrCat(char *to, const char *from) {
	char *p = to;
	to = to + strlen(to);
	while (*from) {
		*to++ = *from++;
	}
	*to='\0';
	return p;
}

/**
 * Show strcat method
 */
void demoStrCat() {
	char s1[] = "Hello ";
	char s2[] = "world!";
//	strcat(s1,s2);
	myStrCat(s1, s2);
	printf("s1=%s\n",s1);
}

int main() {
//	demoStrlen();
//	demoStrCmp();
//	demoStrCpy();
//	demoStrChr();
	demoStrCat();
	return 0;
}

