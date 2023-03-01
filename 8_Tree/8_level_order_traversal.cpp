#include <iostream>
#include <queue>
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
void levelorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    queue<node *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        node *n = q.front();
        q.pop();
        if (n != NULL)
        {
            cout << n->data << " ";
            if (n->left)
            {
                q.push(n->left);
            }
            if (n->right)
            {
                q.push(n->right);
            }
        }
        else if (!q.empty())
        {
            q.push(NULL);
            cout << endl;
        }
    }
}
int main(int argc, char const *argv[])
{
    node *root = 0;
    call(root);
    inorder(root);
    cout << endl;
    levelorder(root);
    return 0;
}
