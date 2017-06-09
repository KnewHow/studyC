/*
 * code.c
 *
 *  Created on: Jun 9, 2017
 *      Author: ygh
 */

#include <stdio.h>

int gAll = 12;

/**
 * __func__ get current function name
 */
void fun() {
	printf("in %s gAll=%d\n", __func__, gAll);
	gAll += 2;
	printf("agin in %s gAll=%d\n", __func__, gAll);
}
int main() {
	printf("in %s gAll=%d\n", __func__, gAll);
	fun();
	printf("agin in %s gAll=%d\n", __func__, gAll);
	return 0;
}
