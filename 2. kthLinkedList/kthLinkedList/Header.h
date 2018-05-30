#pragma once
#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
	int val;
	struct node *next;
} NODE;

NODE *insertArray(int arr[], int len);
NODE *findKthToLast(NODE *head, int k);
void printList(NODE *head);