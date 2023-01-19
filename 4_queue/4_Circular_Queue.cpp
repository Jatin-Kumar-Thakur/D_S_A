#include <iostream>
using namespace std;

class circular_queue
{
public:
    int front = -1, rear = -1;
    int size, arr[];
    circular_queue(int size)
    {
        this->size = size;
        arr[size];
        front = -1;
        rear = -1;
    }
    void enqueue(int data);
    void dequeue();
    int peek();
    void display();
};
void circular_queue::enqueue(int data){
    if ((rear+1)%size==front)
    {
        cout<<"Insertion is Not possible bcz Queue is Full"<<endl;
    }
    else if (front==-1 && rear==-1)
    {
        front=rear=0;
        arr[rear]=data;
    }
    else
    {
        rear=(rear+1)%size;
        arr[rear]=data;
    }
    
}
void circular_queue::dequeue(){
    if (front==-1 && rear==-1)
    {
        cout<<"Queue is Empty"<<endl;
    }
    else if (front==rear)
    {
        front=rear=-1;
    }
    else
    {
        front=(front+1)%size;
    }
}
void circular_queue::display(){
if (front==-1 && rear==-1)
{
    cout<<"Queue is Empty"<<endl;
}
else
{
    int temp=front;
    while (temp!=rear)
    {
        cout<<arr[temp]<<" ";
        temp=(temp+1)%size;
    }
    cout<<arr[temp]<<endl;
}

}

int main(int argc, char const *argv[])
{
    circular_queue q(5);
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
