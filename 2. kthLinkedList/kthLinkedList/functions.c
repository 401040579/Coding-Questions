#include "Header.h"

//insert array into linked list by using tail insert
NODE *insertArray(int arr[], int len)
{
	NODE *head = (NODE *)malloc(sizeof(NODE));
	head->next = NULL;
	NODE *tail = head; // tail pointer initialization

	for (int i = 0; i < len; i++) {
		NODE *p = (NODE *)malloc(sizeof(NODE));
		p->val = arr[i];
		tail->next = p; // insert p after tail
		tail = p;
	}

	tail->next = NULL;  // set next to null

	return head;
}

//core function for finding kth to last element
NODE *findKthToLast(NODE *head, int k)
{
	NODE *p1 = head;
	NODE *p2 = head;

	for (int i = 0; i < k; i++) {
		p2 = p2->next;
	}

	while (p2 != NULL) {
		p1 = p1->next;
		p2 = p2->next;
	}

	return p1;
}

//print linked list
void printList(NODE *head)
{
	if (head == NULL) return;

	NODE *p = head->next;
	while (p != NULL) {
		printf("%d->", p->val);
		p = p->next;
	}
	printf("NULL\n");
}