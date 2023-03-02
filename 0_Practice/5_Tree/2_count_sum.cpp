// count and sum of nodes
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
    // node *newnode=new node();
    //  newnode->data=data;
    //  newnode->left=0;
    //  newnode->right=0;
};

node *bst(node *root, int data)
{
    // node *newnode=new node();
    // newnode->data=data;
    // newnode->left=0;
    // newnode->right=0;
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
int countNodes(node *root){
    if (root==NULL)
    {
        return 0;
    }
    return countNodes(root->left)+countNodes(root->right)+1;
    
}
int sumNodes(node *root){
    if (root==NULL)
    {
        return 0;
    }
    return sumNodes(root->left)+sumNodes(root->right)+root->data;
    
}
void sum_count(node *root, int &sum, int &count)
{
    if (root == NULL)
    {
        return;
    }
    sum_count(root->left, sum, count);
    sum = sum + root->data;
    count++;
    sum_count(root->right, sum, count);
}
int main(int argc, char const *argv[])
{
    node *root = NULL;
    int data;
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
    cout<<endl;

    int sum = 0, count = 0;
    sum_count(root, sum, count);
    cout << "Sum of Nodes : " << sum << endl
         << "Count of nodes : " << count << endl;

    int c=countNodes(root);
    cout<<"Count of Nodes By another Function : "<<c<<endl;

    int s=sumNodes(root);
    cout<<"Sum of Tree nodes Using Another Function : "<<s<<endl;
    return 0;
}
