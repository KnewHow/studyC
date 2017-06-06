/*
 * code.c
 *
 *  Created on: 2017年6月6日
 *      Author: ygh
 *  Demo getchar method putchar method
 */
#include <stdio.h>

/**
 * Test getchar method
 */
void fun1() {
	char ch;
	while ((ch = getchar()) != EOF) {
		printf("%c", ch);
	}
	printf("EOF\n");
}

/**
 * How to define a string array
 */
void fun2() {
	/**
	 * This is a tow-dimensional point,but not a array of array
	 */
	char **a;
	/**
	 * This method to define string array must make sure that
	 * maximal length of string don't greater than default length.
	 * It is not a good method to define a array of string
	 */
	char b[][10] = { "hello", };

	/**
	 * This is a good way to define a array of string,you can
	 * set arbitrary length of the string
	 */
	char *c[] = { "Hello", "World", };
	c[3] = "sdsdsdsdsd";
	printf("%s", c[3]);
}

int main() {
//	fun1();
	fun2();
	return 0;
}

