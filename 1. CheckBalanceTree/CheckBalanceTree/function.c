#include "Header.h"

// make a new node
struct TreeNode* newNode(int data)
{
	struct TreeNode* node = (struct TreeNode*)malloc(sizeof(struct TreeNode));
	node->val = data;
	node->left = NULL;
	node->right = NULL;
	return(node);
}

//helper function max
int max(int a, int b)
{
	if (a>b) return a;
	else return b;
}

//helper function Depth
int Depth(struct TreeNode *root)
{
	if (root == NULL) return 0;
	return 1 + max(Depth(root->left), Depth(root->right));
}

// core function check balance
bool isBalanced(struct TreeNode *root)
{
	if (root == NULL) return true;
	if (!isBalanced(root->left)) return false;
	if (!isBalanced(root->right)) return false;

	int depthLeft = Depth(root->left);
	int depthRight = Depth(root->right);
	if (abs(depthLeft - depthRight) > 1)
		return false;
	return true;
}