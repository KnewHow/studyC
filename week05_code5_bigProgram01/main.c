/*
 * main.c
 *
 *  Created on: Jun 12, 2017
 *      Author: ygh
 *  Show how to use two *.c file to run program
 */
#include <stdio.h>
#include "max.h"
#include "min.h"

int main() {
	printf("%d\n",max(3,gAll));
	return 0;
}

