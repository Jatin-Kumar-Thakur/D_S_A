#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node *pre;
};
void createNewNode(node *&head, node *&temp, node *&tail, int data)
{
    node *newnode = new node();
    newnode->data = data;
    newnode->next = 0;
    newnode->pre = 0;
    if (head == 0)
    {
        head = temp = tail = newnode;
        head->next=newnode;
        head->pre=tail;
    }
    else
    {
        tail = newnode;
        head->pre=newnode;
        temp->next = newnode;
        newnode->pre = temp;
        temp = temp->next;
    }
}
void InsertionAtStart(node *&head, node *&temp, node *&tail, int data)
{
    node *newnode = new node();
    newnode->data = data;
    newnode->next = 0;
    newnode->pre = 0;
    if (head == 0)
    {
        head = tail = temp = newnode;
    }
    else
    {
        newnode->next = head;
        head->pre = newnode;
        head = newnode;
    }
}
void InsertionAtEnd(node *&head, node *&temp, node *&tail, int data)
{
    node *newnode = new node();
    newnode->data = data;
    newnode->next = 0;
    newnode->pre = 0;
    if (head == 0)
    {
        head = temp = tail = newnode;
    }
    else
    {
        tail->next = newnode;
        newnode->pre = tail;
        tail = tail->next;
    }
}
void InsertionAtRandomPosition(node *&head, node *&temp, node *&tail, int data, int pos)
{
    node *newnode = new node();
    newnode->data = data;
    newnode->next = 0;
    newnode->pre = 0;
    int position = 1, length = 0;
    temp = head;
    while (temp != 0)
    {
        length++;
        temp = temp->next;
    }
    if (pos > length + 1)
    {
        cout << "Invalid position Input" << endl;
        return;
    }
    else if (pos >= length + 1)
    {
        temp = tail;
        temp->next = newnode;
        newnode->pre = temp;
        tail = newnode;
        cout << endl
             << tail->data << endl;
        return;
    }
    cout << endl
         << "hello";
    temp = head;
    while (position != pos - 1)
    {
        temp = temp->next;
        position++;
    }
    // cout<<endl<<"hello"<<temp->data;
    newnode->pre = temp;
    newnode->next = temp->next;
    temp->next = newnode;
    temp = temp->next; // esse y new node pr aayega
    temp = temp->next; // esse y new node k next pr aa jayega uske baad hum next waale k pre part me newnode ka addesss daal dege
    temp->pre = newnode;
}
void deleteFromStart(node *&head, node *&temp, node *&tail)
{
    if (head == 0)
    {
        cout << "Linked list is Empty" << endl;
        return;
    }
    temp = head;
    head = head->next;
    head->pre = 0;
    temp->next = 0;
    delete temp;
}
void deleteFromEnd(node *&head, node *&temp, node *&tail)
{
    if (head == 0)
    {
        cout << "Linked list is Empty" << endl;
        return;
    }
    temp = tail;
    tail = tail->pre;
    temp->pre = 0;
    tail->next = 0;
    delete temp;
}
void deleteFromRandomPosition(node *&head, node *&temp, node *&tail, int pos)
{
    int position = 1, length = 0;
    node *up = 0, *down = 0;
    temp = head;
    while (temp != 0)
    {
        length++;
        temp = temp->next;
    }
    if (pos > length)
    {
        cout << "Invalid position Input" << endl;
        return;
    }
    temp = head;
    while (position != pos)
    {
        temp = temp->next;
        position++;
    }
    up = temp->next;
    down = temp->pre;
    temp->pre = 0;
    temp->next = 0;
    up->pre = down;
    down->next = up;
    delete temp;
}
void display_next(node *&head, node *&temp)
{
    temp = head;
    while (temp != 0)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
void display_pre(node *&head, node *&temp, node *&tail)
{
    temp = tail;
    while (temp != 0)
    {
        cout << temp->data << " ";
        temp = temp->pre;
    }
    cout << endl;
}
int main(int argc, char const *argv[])
{
    node *head = 0, *newnode = 0, *temp = 0, *pre = 0, *tail = 0;
    int choice = 0;
    cout << "Enter Choice : ";
    cin >> choice;
    while (choice)
    {
        int data;
        cout << "Enter Data : ";
        cin >> data;
        createNewNode(head, temp, tail, data);
        cout << "Enter Choice : ";
        cin >> choice;
    }
    display_next(head, temp);
    display_pre(head, temp, tail);

    cout << endl;
    InsertionAtStart(head, temp, tail, 99);
    display_next(head, temp);
    display_pre(head, temp, tail);

    cout << endl;
    InsertionAtEnd(head, temp, tail, 100);
    display_next(head, temp);
    display_pre(head, temp, tail);

    cout << endl;
    InsertionAtRandomPosition(head, temp, tail, 999, 3);
    display_next(head, temp);
    display_pre(head, temp, tail);

    cout << endl;
    deleteFromStart(head, temp, tail);
    display_next(head, temp);
    display_pre(head, temp, tail);

    cout << endl;
    deleteFromEnd(head, temp, tail);
    display_next(head, temp);
    display_pre(head, temp, tail);

    cout << endl;
    deleteFromRandomPosition(head, temp, tail, 2);
    display_next(head, temp);
    display_pre(head, temp, tail);
    return 0;
}
