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

void fun5() {
	unsigned int a = 1;
	long b;
	while (a != 0) {
		a = a + 1;
	}
	b = a-1;
	printf("unsigned int的范围:%ld\n", b);
}

void fun6(){
	int a = 012;
	int b = 0x12a;
	printf("a=%d,b=%d\n",a,b);
	printf("a=%o,b=%x\n",a,b);
}

void fun7(){
	int a=-1;
	char b = -1;
	printf("a=%u,b=%u",a,b);
}

int main() {
//	fun2();
//	fun1();
	fun7();
	return 0;
}

