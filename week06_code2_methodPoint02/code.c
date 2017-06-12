/*
 * code.c
 *
 *  Created on: Jun 12, 2017
 *      Author: ygh
 *  Show method point too.
 */

#include <stdio.h>
int f(int a) {
	printf("f function %d\n", a);
	return a;
}

int g(int a) {
	printf("g function %d\n", a);
	return a;
}

int h(int a) {
	printf("h function %d\n", a);
	return a;
}

int k(int a) {
	printf("k function %d\n", a);
	return a;
}

int main() {

	int i;
	scanf("%d", &i);
	int (*functions[])(int)={f,g,h,k};
	if(i>=0 && i<(sizeof(functions)/sizeof(functions[0]))){
		(*functions[i])(i);
	}
	/**
	 * Before function point

	 switch (i) {
	 case 1:
	 f(i);
	 break;
	 case 2:
	 g(i);
	 break;
	 case 3:
	 h(i);
	 break;
	 case 4:
	 k(i);
	 break;
	 default:
	 printf("error\n");
	 break;
	 }
	 */
	return 0;

}
