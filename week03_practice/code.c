/*
 * code.c
 *
 *  Created on: Jun 9, 2017
 *      Author: ygh
 */
#include <stdio.h>
#include <stdlib.h>
#include "list.h"

//typedef struct node *ptrList;
//struct node{
//	int element;
//	struct node *next;
//};

ptrList createHead() {
	ptrList head = (ptrList) malloc(sizeof(struct node));
	head->next = NULL;
	return head;
}

void getInputData(ptrList head) {
	int number;
	scanf("%d", &number);
	while (number != -1) {
		ptrList newNode = (ptrList) malloc(sizeof(struct node));
		newNode->element = number;
		newNode->next = head->next;
		head->next = newNode;
		scanf("%d", &number);
	}
}

void toString(ptrList head) {
	ptrList p = head->next;
	while (p) {
		printf("%d ", p->element);
		p = p->next;
	}
}

int main() {
	ptrList head = createHead();
	getInputData(head);
	toString(head);
	return 0;
}
