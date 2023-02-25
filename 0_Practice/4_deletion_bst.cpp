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
        left = 0;
        right = 0;
    }
};
node *search(node *root, int val)
{
    if (root == NULL)
    {
        return NULL;
    }

    if (root->data == val)
    {
        return root;
    }
    if (val > root->data)
    {
        return search(root->right, val);
    }
    else
    {
        return search(root->left, val);
    }
}
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
node *predecure(node *root)
{
    while (root->right != NULL)
    {
        root = root->right;
    }
    return root;
}
node *sucessor(node *root)
{
    while (root->left != 0)
    {
        root = root->left;
    }
    return root;
}
node *delete_node(node *root, int val)
{
    if (root == NULL)
    {
        return root;
    }
    if (root->data == val)
    {
        if (root->left == 0 && root->right == 0)
        {
            delete root;
            return NULL;
        }
        else if (root->left != 0 && root->right == 0)
        {
            node *temp = root->left;
            delete root;
            return temp;
        }
        else if (root->left != 0 && root->right != 0)
        {
            node *min = sucessor(root->right);
            cout<<"it must be four : "<<min->data<<endl;
            root->data = min->data;
            root->right = delete_node(root->right, min->data);
            return root;
        }
    }
    else if (val > root->data)
    {
        root->right = delete_node(root->right, val);
        return root;
    }
    else
    {
        root->left = delete_node(root->left, val);
        return root;
    }
    return root;
}
void call(node *&root)
{
    int data;
    cout << "Enter data : ";
    cin >> data;
    while (data != -1)
    {
        root = bst(root, data);
        cout << "Enter data : ";
        cin >> data;
    }
}
void inorder(node *root)
{
    if (root == NULL)
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
    call(root);
    inorder(root);

    node *val = search(root, 1);
    // cout << "val->data : " << val->data;
    if (val == NULL)
    {
        cout << endl
             << "Not Exist " << endl;
    }
    else
    {
        cout << endl
             << "Node is exist " << endl;
    }
    int del;
    cout << "Enter node for deletion : ";
    cin >> del;
    root = delete_node(root, del);
    cout << "Root->data : " << root->data << endl;
    inorder(root);
    return 0;
}
