/*
 * code.c
 *
 *  Created on: 2017年6月4日
 *      Author: ygh
 * This code is to demo the point application scene
 */
#include <stdio.h>

/**
 * The first application scene:swap value
 * A method to swap two integer number
 */
void swap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * The second application scene:when a method has more than one value
 * Get minimal value and maximal value from a array
 */
void getMaxAndMin(int array[], int *max, int *min, int length) {
	int i;
	*max = array[0];
	*min = array[0];
	for (i = 1; i < length; i++) {
		if (array[i] > *max) {
			*max = array[i];
		}

		if (array[i] < *min) {
			*min = array[i];
		}
	}
}

/**
 * The third application scene:when a method need return status and
 * result. We usually use return to get status and use point to get
 * value.
 *
 * A method implement two number divide.In b equal zero, we will
 * return zero as the faulty status, otherwise we will return
 * a positive integer number as the correct status. We use a point
 * as the result to return
 */
int devide(int a, int b, int *result) {
	int status = 1;
	if (b == 0) {
		status = 0;
	} else {
		*result = a / b;
	}
	return status;
}

int main() {
	int a = 0;
	int b = 6;
	int arr[] = { 1, 3, 5, 6, 7, 12, 23, 34, 56, 78, 90 };
	int min, max;
	int result;
	swap(&a, &b);
	printf("a=%d,b=%d\n", a, b);
	getMaxAndMin(arr, &max, &min, sizeof(arr) / sizeof(arr[0]));
	printf("min=%d,max=%d\n", min, max);
	if (devide(a, b, &result)) {
		printf("result=%d\n", result);
	}else{
		printf("error\n");
	}
	return 0;
}

