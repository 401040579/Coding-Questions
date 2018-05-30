#include "Header.h"

int TEST1()
{
	/*
	level 1:			   1
	level 2:			2    3
	level 3:		   4 5
	level 4:		  6
	*/
	struct TreeNode *root = newNode(1);
	root->left = newNode(2);
	root->right = newNode(3);
	root->left->left = newNode(4);
	root->left->right = newNode(5);
	root->left->left->left = newNode(6);

	printf
	(		
		"\nCase 1:\n\
level 1:     1\n\
level 2:   2   3\n\
level 3:  4 5\n\
level 4: 6\n"
	);

	if (isBalanced(root))
		printf("Tree is balanced");
	else
		printf("Tree is not balanced");

	return 0;
}

int TEST2()
{
	/*
	level 1:			    1
	level 2:			2      3
	level 3:		   4 5    8 9
	level 4:		  6      10
	level 5:		 7
	*/
	struct TreeNode *root = newNode(1);
	root->left = newNode(2);
	root->right = newNode(3);
	root->left->left = newNode(4);
	root->left->right = newNode(5);
	root->left->left->left = newNode(6);
	root->left->left->left->left = newNode(7);
	root->right->left = newNode(8);
	root->right->right = newNode(9);
	root->right->left->left = newNode(10);
	
	printf
	(
		"\nCase 2:\n\
level 1:      1\n\
level 2:   2     3\n\
level 3:  4 5   8 9\n\
level 4: 6     10\n\
level 5:7\n"
);
	if (isBalanced(root))
		printf("Tree is balanced");
	else
		printf("Tree is not balanced");

	return 0;
}

int TEST3()
{
	/*
	level 1:			    1
	level 2:			2      3
	level 3:		   4 5    7
	level 4:		  6      
	*/
	struct TreeNode *root = newNode(1);
	root->left = newNode(2);
	root->right = newNode(3);
	root->left->left = newNode(4);
	root->left->right = newNode(5);
	root->left->left->left = newNode(6);
	root->right->left = newNode(7);

	printf
	(
		"\nCase 3:\n\
level 1:      1\n\
level 2:   2     3\n\
level 3:  4 5   7\n\
level 4: 6\n"
);

	if (isBalanced(root))
		printf("Tree is balanced");
	else
		printf("Tree is not balanced");

	return 0;
}

int main()
{
	TEST1();
	getchar();
	TEST2();
	getchar();
	TEST3();
	getchar();
}