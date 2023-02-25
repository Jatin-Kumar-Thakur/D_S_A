// two approaches
// one is for bst inorder traversal is sorted with time complexity of O(n);

// another one is check for left and right

#include <iostream>
#include <vector>
#include <algorithm>
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
node *tree(node *root)
{
    int data;
    cout << "Enter data : ";
    cin >> data;
    root = new node(data);
    if (data == -1)
    {
        return root;
    }
    cout << "Enter data for left node : " << root->data << " : ";
    root->left = tree(root->left);
    cout << "Enter data for right node : " << root->data << " : ";
    root->right = tree(root->right);
    return root;
}
node *bst(node *root, int data)
{
    if (root == 0)
    {
        root = new node(data);
        return root;
    }
    else if (data > root->data)
    {
        root->right = bst(root->right, data);
    }
    else
    {
        root->left = bst(root->left, data);
    }
    return root;
}
void call(node *&root)
{
    int data;
    cout << "Enter Data : ";
    cin >> data;
    while (data != -1)
    {
        root = bst(root, data);
        cout << "Enter Data : ";
        cin >> data;
    }
}
void inorder(node *root)
{
    if (root->data == -1)
    {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

// approach 1
void validate(node *root, vector<int> &v)
{
    if (root->data == -1)
    {
        return;
    }
    validate(root->left, v);
    v.push_back(root->data);
    validate(root->right, v);
}
int main(int argc, char const *argv[])
{
    node *root = 0;
    // call(root);
    root = tree(root);
    cout << endl;
    inorder(root);
    cout << endl;
    vector<int> v;
    
    validate(root, v);
    cout<<"vector"<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    if (is_sorted(v.begin(), v.end()))
    {
        cout << "Tree is Bst" << endl;
    }
    else
    {
        cout << "Tree is Not Bst " << endl;
    }
    return 0;
}
