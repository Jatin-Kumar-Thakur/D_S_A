#include <iostream>
#include <string>
using namespace std;

class stack
{
public:
    int size, top;
    int arr[];
    stack(int size)
    {
        this->size = size;
        arr[size];
        top = -1;
    }
    void push(int data);
    void pop();
    int peek();
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
        cout << "Stack is Empty " << endl;
    }
    else
    {
        top--;
    }
}
int stack::peek()
{
    if (top == -1)
    {
        return 0;
    }
    else
    {
        return arr[top];
    }
}
int prefix(string s, stack st)
{
    for (int i = s.length()-1; i>=0; i--)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            st.push(s[i] - '0');
        }
        else
        {
            int op1 = st.peek();
            st.pop();
            int op2 = st.peek();
            st.pop();
            switch (s[i])
            {
            case '+':
                st.push(op1 + op2);
                break;
            case '-':
                st.push(op1 - op2);
                break;
            case '*':
                st.push(op1 * op2);
                break;
            case '/':
                st.push(op1 / op2);
                break;

            default:
                break;
            }
        }
    }
    return st.peek();
}
int main(int argc, char const *argv[])
{
    stack st(5);
    cout<<prefix("-+7*45+20",st);
    return 0;
}
