#include <iostream>
using namespace std;

class node
{
public:
	int data;
	node *left;
	node *right;
	node(int data)
	{
		this->data = data;
		this->left = 0;
		this->right = 0;
	}
};

node *bst(node *root, int data)
{

	if (root == NULL)
	{
		return new node(data);
	}
	if (data < root->data)
	{
		root->left = bst(root->left, data);
	}
	else
	{
		root->right = bst(root->right, data);
	}

	return root;
}

void inorder(node *root)
{
	if (root == nullptr)
	{
		return;
	}
	inorder(root->left);
	cout << root->data << " ";
	inorder(root->right);
}

int main(int argc, char const *argv[])
{
	node *root = NULL;
	int data = 0;
	cout << "Enter data : ";
	cin >> data;
	while (data != -1)
	{
		root = bst(root, data);
		cout << "Enter data : ";
		cin >> data;
	}
	cout << "Data: ";
	inorder(root);
	return 0;
}
