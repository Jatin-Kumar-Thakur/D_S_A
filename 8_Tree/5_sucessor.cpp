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
node *sucessor(node *root)
{
    if (root->left == NULL)
    {
        return root;
    }
    sucessor(root->left);
    return NULL;
}
// node *sucessor(node *root)
// {
//     while (root->left != 0)
//     {
//         root = root->left;
//     }
//     return root;
// }
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

    node *temp = sucessor(root->right);
    cout << endl
         << "Temp->data : " << temp->data << endl;
    cout << "root " << root->data << endl;
    // node *val = search(root, 1);
    // // cout << "val->data : " << val->data;
    // if (val == NULL)
    // {
    //     cout << endl
    //          << "Not Exist " << endl;
    // }
    // else
    // {
    //     cout << endl
    //          << "Node is exist " << endl;
    // }
    return 0;
}
