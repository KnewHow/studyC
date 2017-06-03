/*
 * code.c
 *
 *  Created on: 2017年6月3日
 *      Author: ygh
 *  A code to show the string ic C
 */

#include <stdio.h>

/*
 * Show string
 */
void fun1(){
	int i;
	char *s="Hello!";
	char *s2="Hello!";
	printf("i address:%p\n",&i);
	printf("s address:%p\n",s);
	printf("s2 address:%p\n",s2);
//	s[0]='B';
//	printf("s[0]=%c",s[0]);

}

/*
 * Shwo string
 */
void fun2(){
	int i;
	char *s="Hello!";
	char *s2="Hello!";
	char s3[]="Hello!";
	printf("i address:%p\n",&i);
	printf("s address:%p\n",s);
	printf("s2 address:%p\n",s2);
	printf("s3 address:%p\n",s3);
	s3[0]='B';
	printf("s3[0]=%c",s3[0]);

}
int main(){
	fun2();
	return 0;
}

