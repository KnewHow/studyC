/*
 * code.c
 *
 *  Created on: Jun 11, 2017
 *      Author: ygh
 */
#include <stdio.h>
//const double PI =3.14159;
#define  PI 3.14159
#define FORMAT "%f\n"
#define PI2 2*PI//2*PI
#define PRT printf("%f ",PI); \
			printf("%f\n",PI2)

int main(){
//	printf(FORMAT,PI2*3.0);
//	printf("%f\n",2*PI);
//	PRT;
	printf("%d %s\n",__LINE__,__FILE__);
	printf("%s:%s\n",__DATE__,__TIME__);
	return 0;
}

