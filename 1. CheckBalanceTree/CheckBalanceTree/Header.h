#pragma once
#include <stdio.h>
#include <stdbool.h>

struct TreeNode
{
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
} ;

struct TreeNode* newNode(int data);
int max(int a, int b);
int Depth(struct TreeNode *root);
bool isBalanced(struct TreeNode *root);