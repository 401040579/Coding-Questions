#include <iostream>
#include <queue>

using std::cout;
using std::queue;

struct Node
{
	int data;
	struct Node *left, *right;
};

void printLevelOrder(Node *root)
{
	if (root == nullptr) return;

	queue<Node *> q;

	q.push(root);

	while (true)
	{
		int totalNode = q.size();

		if (totalNode == 0) break;

		while (totalNode > 0)
		{
			Node *node = q.front();
			cout<<node->data << " ";
			q.pop();
			if (node->left != nullptr)
				q.push(node->left);
			if (node->right != nullptr)
				q.push(node->right);
			totalNode--;
		}
		cout << "\n";
	}
}

Node* newNode(int data)
{
	Node *temp = new Node;
	temp->data = data;
	temp->left = temp->right = NULL;
	return temp;
}

int main()
{
	Node *root = newNode(1);
	root->left = newNode(2);
	root->right = newNode(3);
	root->left->left = newNode(4);
	root->left->right = newNode(5);
	root->right->right = newNode(6);
	/*				  1
                   /     \
                  2       3
                /   \       \
               4     5       6
    */
	cout << "level order: \n";
	printLevelOrder(root);
	return 0;
}
