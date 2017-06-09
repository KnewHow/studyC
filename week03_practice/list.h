/*
 * list.h
 *
 *  Created on: Jun 9, 2017
 *      Author: ygh
 */

#ifndef LIST_H_
#define LIST_H_

typedef struct node *ptrList;
struct node{
	int element;
	struct node *next;
};

#endif /* LIST_H_ */
