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

node *bst(node *&root)
{
    int data;
    while (true)
    {
        cout << "Enter Data : ";
        cin >> data;
        if (data == -1)
        {
            break;
        }
        root = new node(data);
        // if (root == 0)
        // {
        //    root =root;
        // }
        //else
        if (data < root->data)
        {
            root->left = bst(root->left);
        }
        else
        {
            root->right = bst(root->right);
        }
        return root;
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
    node *root = 0;
    root = bst(root);
    // root = bst(root);
    // root = bst(root);
    cout << "Data: ";
    inorder(root);
    return 0;
}
