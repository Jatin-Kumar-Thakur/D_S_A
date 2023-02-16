#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node *left;
    node *right;
    node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};
node *binary_tree()
{
    node *root; // root=newnode
    int data;
    cout << "Enter Data for new node : ";
    cin >> data;
    // root->data = data;
    root = new node(data);
    if (data == -1)
    {
        return NULL;
    }

    cout << "Enter data for newnode left " << root->data << " : " << endl;
    root->left = binary_tree();
    cout << "Enter data for newnode right " << root->data << " : " << endl;
    root->right = binary_tree();

    return root;
}
// node *binary_tree(node *root)
// {
//     // root = new node();
//     // root->left = 0;
//     // root->right = 0;
//     int data;
//     cout << "Enter Data for new node : ";
//     cin >> data;
//     // root->data = data;
//     root = new node(data);
//     if (data == -1)
//     {
//         return NULL;
//     }

//     cout << "Enter data for newnode left " << root->data << " : " << endl;
//     root->left = binary_tree(root->left);
//     cout << "Enter data for newnode right " << root->data << " : " << endl;
//     root->right = binary_tree(root->right);

//     return root;
// }
void preorder(node *root) // root-left-right
{
    if (root == NULL)
    {
        return;
    }

    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void inorder(node *root) // left-node-right
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
void post_order(node *root) // left-right-node
{
    if (root == NULL)
    {
        return;
    }

    post_order(root->left);
    post_order(root->right);
    cout << root->data << " ";
}
int main(int argc, char const *argv[])
{
    node *root = NULL;
    // root = binary_tree(root);
    root = binary_tree();
    preorder(root);
    cout << endl;
    inorder(root);
    cout << endl;
    post_order(root);
    return 0;
}
