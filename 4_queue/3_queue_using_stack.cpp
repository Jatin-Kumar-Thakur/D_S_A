#include <iostream>
#include <stack>
using namespace std;

class queue
{
public:
    stack<int> s;
    stack<int> s2;
    void enqueue(int data);
    void dequeue();
    void peek();
    void display();
};
void queue::enqueue(int data)
{
    s.push(data);
}
void queue::dequeue()
{
    if (s.empty())
    {
        cout << "Empty queue" << endl;
    }
    else
    {
        while (!s.empty())
        {
            s2.push(s.top());
            s.pop();
        }
        s2.pop();
        while (!s2.empty())
        {
            s.push(s2.top());
            s2.pop();
        }
    }
}
void queue::peek()
{
    if (s.empty())
    {
        cout << "Empty queue" << endl;
    }
    else
    {
        while (!s.empty())
        {
            s2.push(s.top());
            s.pop();
        }
        cout << s2.top() << endl;
        while (!s2.empty())
        {
            s.push(s2.top());
            s2.pop();
        }
    }
}
void queue::display()
{
    if (s.empty())
    {
        cout << "Empty queue" << endl;
    }
    else
    {
        while (!s.empty())
        {
            s2.push(s.top());
            s.pop();
        }
        while (!s2.empty())
        {
            cout << s2.top() << " ";
            s.push(s2.top());
            s2.pop();
        }
        cout << endl;
    }
}
int main(int argc, char const *argv[])
{
    queue q;
    q.enqueue(10);
    q.enqueue(20);

    q.peek();

    q.dequeue();

    q.peek();

    q.enqueue(40);
    q.enqueue(30);

    q.peek();
    q.display();

    return 0;
}
