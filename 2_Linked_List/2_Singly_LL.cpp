#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

void CreateNewNode(Node *&head, Node *&temp, int data)
{
    Node *newnode = new Node();
    if (head == NULL)
    {
        head = temp = newnode;
        head->data = data;
    }
    else
    {
        temp->next = newnode;
        newnode->data = data;
        temp = temp->next;
    }
}
void InsertionAtstart(Node *&head, Node *&temp, int data)
{
    Node *newnode = new Node();
    if (head == NULL)
    {
        head = temp = newnode;
        head->data = data;
    }
    else
    {
        newnode->data = data;
        newnode->next = head;
        head = newnode;
    }
}
void InsertionAtEnd(Node *&head, Node *&temp, int data)
{
    Node *newnode = new Node();
    newnode->data = data;
    // if (head==NULL)
    // {
    //     head=temp=newnode;
    //     head->data=data;
    // }
    // else
    // {
    temp = head;
    while (temp->next != 0)
    {
        temp = temp->next;
    }
    newnode->next = NULL;
    temp->next = newnode;
    temp = temp->next;
    // }
}
void InsertionAtRandomPos(Node *&head, Node *&temp, int data, int pos)
{
    Node *newnode = new Node();
    newnode->data = data;
    temp = head;
    int position = 1;
    while (position != pos - 1)
    {
        temp = temp->next;
        position++;
    }
    newnode->next = temp->next;
    temp->next = newnode;
    // cout<<"hello";
}

void DeletionFromStart(Node *&head, Node *&temp)
{
    temp = head;
    head = head->next;
    temp->next = NULL;
    delete temp;
    temp = head;
}
void DeletionFromEnd(Node *&head, Node *&temp)
{
    temp = head;
    Node *pre = NULL;
    while (temp->next != 0)
    {
        pre = temp;
        temp = temp->next;
    }
    delete temp;
    pre->next = NULL;
    temp = pre;
}
void DeletionFromRendomPosition(Node *&head, Node *&temp, int pos)
{

    int position = 1;
    Node *pre;
    temp = head;
    while (position != pos)
    {
        pre = temp;
        temp = temp->next;
        position++;
    }
    // cout<<endl<<position<<" "<<temp->data<<endl;
    pre->next = temp->next;
    temp->next = NULL;
    delete temp;
}
void display(Node *&head, Node *&temp)
{
    temp = head;
    while (temp != 0)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main(int argc, char const *argv[])
{
    Node *head = NULL, *newnode, *temp = NULL;
    int choice = 1;
    while (choice)
    {
        int data;
        cout << "Enter Data of new Node : ";
        cin >> data;
        CreateNewNode(head, temp, data);
        cout << "Enter Choice : ";
        cin >> choice;
    }
    display(head, temp);
    InsertionAtstart(head, temp, 100);
    display(head, temp);
    InsertionAtEnd(head, temp, 200);
    display(head, temp);
    InsertionAtRandomPos(head, temp, 111, 3);
    display(head, temp);
    DeletionFromStart(head, temp);
    display(head, temp);
    DeletionFromEnd(head, temp);
    display(head, temp);
    DeletionFromRendomPosition(head, temp, 3);
    display(head, temp);

    return 0;
}
