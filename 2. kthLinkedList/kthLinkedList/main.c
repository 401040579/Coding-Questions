#include "Header.h"

int TEST1()
{
	int arr[] = {1,2,3,4,5,6,7};
	NODE *head = insertArray(arr, 7);

	// print list
	printList(head);

	printf("enter a number: ");
	int k;
	scanf("%d", &k);

	// find kth to last element
	NODE *p = findKthToLast(head, k);
	printf("%dth to last element: %d\n", k,p->val);
	getchar();
	return 0;
}

int main(void)
{
	TEST1();
	getchar();
}