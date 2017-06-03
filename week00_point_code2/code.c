/*
 * code.c
 *
 *  Created on: 2017年6月1日
 *      Author: ygh
 *
 *  some code to show the C address and point
 */
#include <stdio.h>

/**
 * Print variable address
 */
void fun1() {
	int a;
	printf("a address is: 0x%x\n", &a);
	printf("a address is: %p\n", &a);
}

/**
 * Print the variable address
 */
void fun2() {
	int a;
	int p;
	p = (int) (&a);
	printf("a address is: 0x%x\n", p);
	printf("a address is: %p\n", &a);
}

/*
 *Print the variable address size
 */
void fun3() {
	int a;
	int p;
	p = (int) (&a);
	printf("p size is:%lu\n", sizeof(p));
	printf("a address size is:%lu\n", sizeof(&a));
}

/**
 * Show C model of memory in computer
 */
void fun4() {
	int first = 0;
	int second;
	printf("first variable address is:%p\n", &first);
	printf("second variable address is:%p\n", &second);
}

void fun5() {
	int a[10];
	printf("&a address is:%p\n", &a);
	printf("a address is:%p\n", a);
	printf("a[0] address is:%p\n", &a[0]);
	printf("a[1] address is:%p\n", &a[1]);
}

int main() {
	fun5();
	return 0;
}

