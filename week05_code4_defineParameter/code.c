/*
 * code.c
 *
 *  Created on: Jun 12, 2017
 *      Author: ygh
 */
#include <stdio.h>
//#define cube(x)((x)*(x)*(x))

#define RADTODEG1(x) (x * 57.29578)
#define RADTODEG2(x) (x) * 57.29578
//Right
#define RADTODEG3(x) ((x) * 57.29578)
#define MIN(x,y) ((x)>(y)?(y):(x))
int main() {
//	int i;
//	scanf("%d",&i);
//	printf("%d\n",cube(i));
	printf("%f\n", RADTODEG1(5+2));
	printf("%f\n", 180 / RADTODEG2(1));
	printf("%f\n", RADTODEG3(5+2));
	printf("%f\n", 180 / RADTODEG3(1));
	printf("%d\n",MIN(2,4));
	printf("%f\n",MIN(2.3,4.3));
	return 0;
}

