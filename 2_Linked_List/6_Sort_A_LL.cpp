#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

class LL
{
public:
    Node *head = NULL, *newnode, *temp = NULL;
    void CreateNewNode(Node *&head, Node *&temp, int data);
    void InsertionAtstart(Node *&head, Node *&temp, int data);
    void InsertionAtEnd(Node *&head, Node *&temp, int data);
    void display(Node *&head, Node *&temp);
};
void LL::CreateNewNode(Node *&head, Node *&temp, int data)
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
void LL::InsertionAtstart(Node *&head, Node *&temp, int data)
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
void LL::InsertionAtEnd(Node *&head, Node *&temp, int data)
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
void LL::display(Node *&head, Node *&temp)
{
    temp = head;
    while (temp != 0)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

class merge
{
public:
    // Node *head;
    void merge_sort(Node *list1, Node *list2)
    {
        Node *temp = list1;
        Node *t = list1;
        while (temp->next != 0)
        {
            temp = temp->next;
        }
        temp->next = list2;
        temp = list1;
        cout<<"byee"<<endl;
        while (temp->next != 0)
        {
            t = temp;
            Node *random;
            while (t->next != 0)
            {
                if ((t->data) > (t->next->data))
                {
                    random->next = t->next;
                    t->next = random->next->next;
                    random->next->next = t;
                    t = random->next;
                }
                random = t;
                t = t->next;
            }
            temp = temp->next;
        }
        // while (temp->next != 0)
        // {
        //     t = temp;
        //     while (t->next != 0)
        //     {
        //         if ((t->data) > (t->next->data))
        //         {
        //             Node *random;
        //             random->data = t->data;
        //             t->data = t->next->data;
        //             t->next->data = random->data;
        //         }
        //         t=t->next;
        //     }
        //     temp = temp->next;
        // }
    }
    void display(Node *&head)
    {
        Node *temp;
        temp = head;
        while (temp != 0)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};
int main(int argc, char const *argv[])
{
    LL a;
    LL b;

    merge m;
    a.CreateNewNode(a.head, a.temp, 1);
    a.CreateNewNode(a.head, a.temp, 2);
    a.CreateNewNode(a.head, a.temp, 3);
    b.CreateNewNode(b.head, b.temp, 1);
    b.CreateNewNode(b.head, b.temp, 4);
    a.display(a.head, a.temp);
    b.display(b.head, b.temp);

    m.merge_sort(a.head, b.head);
    m.display(a.head);
    return 0;
}
