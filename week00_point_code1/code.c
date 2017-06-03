/*
 * code.c
 *
 *  Created on: 2017年5月30日
 *      Author: ygh
 *
 *  Learn how to add parameter at the complier
 *	If we want to complier at 32 environment,we need add such
 *	parameter
 *	gcc code.c -o code -m32
 *	the flowing program run result is:
 *		 sizeof(char)=1
 sizeof(short)=2
 sizeof(int)=4
 sizeof(long)=4
 sizeof(long long)=4

 If we want to complier at 32 environment,we need add such
 *	parameter
 *	gcc code.c -o code -m32 or gcc code.c -o code
 *	Because my system is 64,so the parameter can not add
 *	If you 64 system execute the gcc code.c -o code -m32 error,you
 *	can execute following command to insall
 *	"sudo apt-get install libc6-dev-i386"
 *
 *
 *
 */
#include<stdio.h>
#include <math.h>
#include <stdbool.h>

void fun1() {
	printf("sizeof(char)=%ld\n", sizeof(char));
	printf("sizeof(short)=%ld\n", sizeof(short));
	printf("sizeof(int)=%ld\n", sizeof(int));
	printf("sizeof(long)=%ld\n", sizeof(long));
	printf("sizeof(long long)=%ld\n", sizeof(long));
}

void fun2() {
	int a;
	a = 6;
	printf("sizeof(int)=%ld\n", sizeof(int));
	printf("sizeof(a)=%ld\n", sizeof(a + 1.0));
	printf("a=%d\n", a);
}

void fun3() {
	unsigned char a = 255;
	printf("a=%d", a);
}

void fun4() {
	int a = 1;
	while (a > 0) {
		a = a + 1;
	}
	a = a - 1;
	printf("int的范围:%d\n", a);
}

/*
 * Calculate the range of the unsigned int
 */
void fun5() {
	unsigned int a = 1;
	long b;
	while (a != 0) {
		a = a + 1;
	}
	b = a - 1;
	printf("unsigned int的范围:%ld\n", b);
}

/*
 * Demo the hex and octonary
 */
void fun6() {
	int a = 012;
	int b = 0x12a;
	printf("a=%d,b=%d\n", a, b);
	printf("a=%o,b=%x\n", a, b);
}

/*
 * Demo %u
 */
void fun7() {
	int a = -1;
	char b = -1;
	printf("a=%u,b=%u", a, b);
}

/*
 * Show float and double input and output method
 */
void fun8() {
	double a = 12345.6789;
	printf("%f\n", a);
	printf("%e\n", a);
	printf("%E\n", a);
}
/*
 * show precision of the float type
 */
void fun9() {
	double a = -0.0049;
	printf("%.3f\n", a);
	printf("%.30f\n", a);
	printf("%.5f\n", a);
	printf("%.2f\n", a);
}

/*
 * show the transgression of the float type
 */
void fun10() {
	printf("%f\n", 12.0 / 0);
	printf("%f\n", -12.0 / 0);
	printf("%f\n", 0.0 / 0.0);
}

/*
 * Show the deviation of the float type
 */
void fun11() {
	float a, b, c;
	/*
	 * If you want to express the number is
	 * float not double,you need to add the "f" at the
	 * end of number
	 */
	a = 1.345f;
	b = 1.123f;
	c = a + b;
	if (c == 2.468) {
		printf("Equal\n");
	} else {
		printf("not equal,%.10f or %f\n", c, c);
	}
}

/*
 * How to compare two float number
 */
void fun12() {
	float a, b, c;
	a = 1.345f;
	b = 1.123f;
	c = a + b;
	if (fabs(c - 2.468) < 1e-7) {
		printf("Equal\n");
	} else {
		printf("not equal,%.10f or %f\n", c, c);
	}
}

/*
 * mixing input integer number and char
 */
void fun13() {
	int i;
	char c;
	scanf("%d%c", &i, &c);
	printf("i=%d,c=%d,c='%c'\n", i, c, c);
}

void fun14(){
	bool t = 6>5;
	bool a = false;
	bool b = 2;
	printf("t=%d,a=%d b=%d",t,a,b);
}
int main() {
	fun14();
	return 0;
}

