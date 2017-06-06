/*
 * code.c
 *
 *  Created on: 2017年6月4日
 *      Author: ygh
 * Point and const modifier
 */
#include <stdio.h>

/**
 * Demo const modifier before point,for example:
 * int const *p = &a; it indicates this point must not be changed,
 * in other word,p must point a.
 */
void constAfterPoint(){
	int a = 12;
	int *const p = &a;
	(*p)=14;//OK
//	p++;error
	printf("*p=%d\n",*p);

}

/**
 * Demo const modifier before point,for example
 * const int *p = &a, it indicate don't change value of a by p,
 * but can change value of p,let p point other variable
 */
void constBeforePoint(){
	int a = 12;
	int b=14;
	const int *p=&a;
//	(*p)=13;Error
	p++;//OK
	p=&b;//OK
}

/**
 * We know the essence of array is a const point.For example
 * int a[]={1,2,3}. it indicates a must point this array,don't
 * point other array,but if we add const before it,it will become
 * const int a[]={1,2,3}. it indicate each elements in this array is
 * const,can not be change after it is defined.In other word,the only
 * way to initialize the array is <code>const int a[]={1,2,3}</code>
 */
void constAndArray(){
	const int arr[]={1,2,3,4,5};
	//arr[0]=3;
	printf("arr[0]=%d\n",arr[0]);
}


/**
 * We say array is the const point of this array,how to prove it
 * by program
 */
void arrayAndPoint(){
	int a[]={1,2,3,4};
	int b[]={12,23,45};
	int c=12;
//	a=b;//compile Error
//	a=&c;//Error
	*a=10;//OK
//	a++;//Error
	printf("a[0]=%d\n",a[0]);
}

int main(){
//	constBeforePoint();
//	constAfterPoint();
//	constAndArray();
	arrayAndPoint();
	return 0;
}

