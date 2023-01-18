#include <iostream>
using namespace std;

class queue
{
public:
    int size, front, rear;
    int arr[];
    queue(int size)
    {
        this->size = size;
        arr[size];
        front = -1;
        rear = -1;
    }
    void enqueue(int data);
    void dequeue();
    int peek();
    bool isfull();
    void display();
};

void queue::enqueue(int data)
{
    if (rear == size - 1)
    {
        cout << "queue is Full" << endl;
    }
    else if (front == -1 && rear == -1)
    {
        front++;
        rear++;
        arr[rear] = data;
    }
    else
    {
        rear++;
        arr[rear] = data;
    }
}
void queue::dequeue()
{
    if (rear == -1 && front == -1)
    {
        cout << "queue is Empty" << endl;
    }
    else if (front == rear)
    {
        front = rear = -1;
    }
    else
    {
        front++;
    }
}
bool queue::isfull()
{
    if (rear < size)
    {
        return false;
    }
    else
    {
        return true;
    }
}
int queue::peek()
{
    if (front == -1)
    {
        cout << "Empty queue" << endl;
        return 0;
    }
    else
    {
        return arr[front];
    }
}
void queue::display()
{
    if (front == -1)
    {
        cout << "queue Is Empty" << endl;
    }
    else
    {
        for (int i = front; i <= rear; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
}
int main(int argc, char const *argv[])
{
    queue q(5);
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30); 
    q.dequeue();
    cout << q.isfull() << endl;
    cout << q.peek() << endl;
    q.display();

    return 0;
}
