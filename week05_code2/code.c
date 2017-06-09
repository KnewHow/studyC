/*
 * code.c
 *
 *  Created on: Jun 9, 2017
 *      Author: ygh
 */

#include <stdio.h>

int gALl = 12;
void fun1() {
//	int k = 2;
	static int k = 2;
	printf("in %s k=%d\n", __func__, k);
	k += 2;
	printf("in %s k=%d\n", __func__, k);
}

void fun2() {
//	int k = 2;
	static int k = 2;
	int i = 0;
	printf("k    address:%p\n", &k);
	printf("gALl address:%p\n", &gALl);
	printf("i    address:%p\n", &i);
	/*
	 *
	 k    address:0x601048
	 gALl address:0x601040
	 i    address:0x7ffe4ee2f174
	 From the result,we can see the static local variable
	 is global variable,but it only be access in method
	 */
}

int main() {
//	fun1();
//	fun1();
//	fun1();
	fun2();
	printf("just test");
	return 0;
}
