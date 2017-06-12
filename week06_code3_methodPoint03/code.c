/*
 * code.c
 *
 *  Created on: Jun 12, 2017
 *      Author: ygh
 *  Show method point too
 */

#include <stdio.h>

int plus(int a, int b) {
	return a + b;
}

int minus(int a, int b) {
	return a - b;
}

/**
 * A method point as a parameter pass a method
 */
void cal(int (*f)(int, int), int a, int b) {
	printf("%d\n", (*f)(a, b));
}
int main() {
	cal(plus, 2, 3);
	cal(minus, 2, 3);
	return 0;
}
