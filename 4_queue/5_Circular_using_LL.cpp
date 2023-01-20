#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
};

class circular_queue
{
public:
    node *front = 0, *rear = 0;
    void enqueue(int data);
    void dequeue();
    int peek();
    void display();
};
void circular_queue::enqueue(int data)
{
    node *newnode = new node();
    newnode->data = data;
    if (front == 0)
    {
        front = rear = newnode;
        newnode->next=front;
    }
    else
    {
        rear->next = newnode;
        rear = newnode;
        rear->next = front;
    }
}
void circular_queue::dequeue()
{
    if (front == 0)
    {
        cout << "Queue is Empty" << endl;
    }
    else if (front == rear)
    {
        delete front;
        front = rear = 0;
    }
    else
    {
        node *temp = front;
        front = front->next;
        rear->next = front;
        delete temp;
    }
}
void circular_queue::display()
{
    if (front == 0)
    {
        cout << "Queue is Empty" << endl;
    }
    else
    {
        node *temp = front;
        while (temp != rear)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << temp->data << endl;
    }
}
int main(int argc, char const *argv[])
{
    circular_queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.display();
    q.dequeue();
    q.enqueue(60);
    q.display();
    return 0;
}
