/*
 * code.c
 *
 *  Created on: Jun 9, 2017
 *      Author: ygh
 */
#include <stdio.h>

union chi{
	int i;
	char arr[sizeof(int)];
} CHI;
int main(){
	CHI.i=1234;
	int i;
	for(i=0;i<sizeof(int);i++){
		printf("%02hhx ",CHI.arr[i]);
	}
	return 0;
}

