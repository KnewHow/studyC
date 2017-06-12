/*
 * code.c
 *
 *  Created on: Jun 12, 2017
 *      Author: ygh
 *  Show how to get a function point
 */
#include <stdio.h>

void f(void) {
	printf("f method\n");
}

int main() {
	/**
	 * Get a point to point the f method
	 */
	void (*pf)(void) =f;
	printf("%p\n", main);
	printf("%p\n", pf);
	f();
	/**
	 * Run method by point
	 */
	(*pf)();
	return 0;
}

