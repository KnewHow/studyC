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

int main() {
	printf("sizeof(char)=%ld\n", sizeof(char));
	printf("sizeof(short)=%ld\n", sizeof(short));
	printf("sizeof(int)=%ld\n", sizeof(int));
	printf("sizeof(long)=%ld\n", sizeof(long));
	printf("sizeof(long long)=%ld\n", sizeof(long));
	printf("just test");
	return 0;
}

