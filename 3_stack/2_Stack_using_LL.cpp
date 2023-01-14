#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
};
void push(node *&top, int data)
{
    node *newnode = new node();
    newnode->data = data;
    newnode->next = 0;
    if (top == 0)
    {
        top = newnode;
        top->next = 0;
    }
    else
    {
        newnode->next = top;
        top = newnode;
    }
}
void pop(node *&top, node *temp)
{
    if (top == 0)
    {
        cout << "Stack UnderFlow" << endl;
    }
    else
    {
        temp = top;
        top = top->next;
        delete temp;
    }
};
void isempty(node *&top)
{
    if (top == 0)
    {
        cout << "Stack UnderFlow" << endl;
    }
    else
    {
        cout << "Stack is Not Empty" << endl;
    }
}
void peek(node *&top)
{
    if (top == 0)
    {
        cout << "Stack UnderFlow" << endl;
    }
    else
    {
        cout << "Top Element of stack is : " << top->data << endl;
    }
}
int main(int argc, char const *argv[])
{
    node *top = 0, *temp = 0;
    int choice = 0;
    cout << "Enter Choice : ";
    cin >> choice;
    while (choice)
    {
        int data;
        cout << "Enter Data of Stack : ";
        cin >> data;
        push(top, data);
        cout << "Enter Choice : ";
        cin >> choice;
    }
    peek(top);
    pop(top, temp);
    peek(top);
    push(top, 20);
    peek(top);
    return 0;
}
