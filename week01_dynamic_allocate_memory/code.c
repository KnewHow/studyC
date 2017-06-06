/*
 * code.c
 *
 *  Created on: 2017年6月5日
 *      Author: ygh
 *  Show some details of dynamic allocate memory and release.
 *  We can use command "man malloc":
 *
 *  	NAME
 *      	   malloc, free, calloc, realloc - allocate and free dynamic memory
 *
 *		SYNOPSIS
 *      	   #include <stdlib.h>
 *
 *		   void *malloc(size_t size);
 *		   void free(void *ptr);
 * We can find the malloc method return a (void*),but we usually
 * cast it into different types.
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * Dynamic allocate some memory for array.
 * In C99 compile environment, we can define a array use following code
 *	<code>int a[n]</code>. But before C99,how to define or allocate
 *	a array whose length only can be get at run time,the code followed.
 */
void demo1() {
	/**
	 * Define a point
	 */
	int *a;
	int length;
	int i;
	scanf("%d", &length);
	/**
	 * Dynamic allocate memory according array's length
	 */
	a = (int*) malloc(length * sizeof(int));
	/**
	 * When a point has been allocate memory by malloc method,
	 * we can use it as a array
	 */
	for (i = 0; i < length; i++) {
		scanf("%d", &a[i]);
	}

	for (i = length - 1; i >= 0; i--) {
		printf("%d ", a[i]);
	}
	/**
	 * We must release the memory we allocate.In a service program
	 * the program will run all the time, if we allocate the memory
	 * but forget releasing,the memory will be consume then the program will collapse
	 * Node:we must free the head point of we has allocate memory
	 * if we <code>free(++a)</code> or <code>free(--a)</code>,the
	 * program will collapse
	 */
	free(a);
//	free(++a);//Error The program will collapse
	printf("just test");
}

/**
 * Demo release memory,we know we must release the first address we allocate
 * memory,but how to do free(0) or free(&i);
 */
void demo2() {
	int i;
	int *p;
//	p = &i;
//	free(p);//Error

	p = NULL;
	/**
	 * Followed code is OK
	 * We know NULL indicate the zero address in virtual memory of program
	 * We mustn't to modify the content of the zero address,But why we can
	 * release zero address?
	 * In order to let us has a good habit to write program.It
	 * ask us initialize point as NULL or zero at first time,but we
	 * may forget to allocate memory to it,so it keep NULL status.
	 * If we remember to release it,how to do of the compile.
	 * So free(NULL) is do nothing,it just let you to develop a good programing
	 * habit
	 */
	free(p);
	printf("just test");
}

/**
 * Calculate how many memory our system can allocate us
 */
void demo3() {
	int *p = NULL;
	int counter = 0;
	while ((p = malloc(100 * 1000 * 1000))) {
		counter++;
	}
	printf("total memory:%d00MB\n", counter);
	free(p);
}

/**
* Test malloc method allocate address whether continuous
*/
void demo4(){
	int *p1,*p2;
	p1 = (int*)malloc(sizeof(int));
	p2 = (int*)malloc(sizeof(int));
	printf("p1 address:%p\n",p1);
	printf("p2 address:%p\n",p2);
	free(p1);
	free(p2);
}

/**
*Calculate address zero
*/
void demo5(){
	int *p;
	p = (int *)malloc(0);
	printf("p address:%p\n",p);
	free(p);
}

int main() {
//	demo1();
//	demo2();
//	demo3();
//	demo4();
	demo5();
	return 0;
}

