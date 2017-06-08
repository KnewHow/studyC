/*
 * code.c
 *
 *  Created on: Jun 8, 2017
 *      Author: ygh
 */

#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 10000

/**
 * Get input string from input data
 */
void getInputData(char *s) {
	char ch;
	while ((ch = getchar()) != '\n') {
		*s++ = ch;
	}
}

/**
 * Find the sub-string position in string
 * @param sub A point to point sub-string
 * @param str A point to point the string searched
 * @param a integer array to record the position of sub-string
 * @return The length of the array. 0 indicate there are no sub-string
 * 	in this string
 *
 */
int findSubStr(char *sub, char *str, int *arr) {
	int count = 0;
	char ch;
	char *p = str;
	while ((p = strstr(p, sub))) {
		ch = *p;
		*p = '\0';
		arr[count++] = strlen(str);
		*p = ch;
		p = p + 1;
	}
	return count;

}

int main() {
	char s1[MAX_LENGTH];
	char s2[MAX_LENGTH];
	int arr[MAX_LENGTH];
	getInputData(s1);
	getInputData(s2);
	int n = findSubStr(s1, s2, arr);
	if (n == 0) {
		printf("-1\n");
	} else {
		int i;
		for (i = 0; i < n; i++) {
			printf("%d ", arr[i]);
		}
	}

	return 0;
}
