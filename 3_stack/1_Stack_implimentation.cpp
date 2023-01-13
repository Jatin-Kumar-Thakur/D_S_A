#include <iostream>
using namespace std;

class stack
{
public:
    int size, top, arr[];
    stack(int size)
    {
        this->size = size;
        arr[size];
        top = -1;
    }
    void push(int data);
    void pop();
    void peek();
    bool isempty();
    void display();
};

void stack::push(int data)
{
    if (top > size - 1)
    {
        cout << "Stack OverFlow" << endl;
    }
    else
    {
        top++;
        arr[top] = data;
    }
}
void stack::pop()
{
    if (top == -1)
    {
        cout << "Stack UnderFlow" << endl;
    }
    else
    {
        top--;
    }
}
void stack::peek()
{
    if (top == -1)
    {
        cout << "stack UnderFlow" << endl;
    }
    else
    {
        cout << arr[top] << endl;
    }
}
bool stack::isempty()
{
    if (top == -1)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
void stack::display()
{
    if (top == -1)
    {
        cout << "Stack UnderFlow" << endl;
    }
    else
    {
        while (top != -1)
        {
            cout << arr[top] << " ";
            top--;
        }
        cout << endl;
    }
}

int main(int argc, char const *argv[])
{
    int size;
    cout << "Enter size of Stack : ";
    cin >> size;

    stack s(size - 1);
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.pop();
    // s.display();  this is not good bcz it pop all the elements of stack
    cout << "Top Element of Stack is : ";
    s.peek();
    cout << s.isempty();
    return 0;
}
