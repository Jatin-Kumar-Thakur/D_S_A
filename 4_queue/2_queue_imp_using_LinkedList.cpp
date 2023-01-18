#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
};
class queue{
    public:
    node* front=0;
    node* rear=0;
    void enqueue(int data);
    void dequeue();
    int peek();
    void display();

};
void queue::enqueue(int data)
{
    node *newnode = new node();
    newnode->data = data;
    newnode->next = 0;
    if (front == 0)
    {
        front = rear = newnode;
    }
    else
    {
        rear->next = newnode;
        rear = newnode;
    }
}
void queue::dequeue(){
    node *temp;
    if (front==0)
    {
        cout<<"Empty queue"<<endl;
    }
    else
    {
        temp=front;
        front=front->next;
        delete temp;
    }
}
int queue::peek(){
    if (front==0)
    {
        cout<<"Empty queue"<<endl;
        return 0;
    }
    else
    {
        return front->data;
    }
}
void queue::display(){
if (front==0)
{
    cout<<"Empty queue"<<endl;
}
else
{
    node*temp=front;
    while(temp!=rear){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<temp->data;
    cout<<endl;
}

}


int main(int argc, char const *argv[])
{
    queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    cout<<q.peek()<<endl;
    q.dequeue();
    q.display();
    return 0;
}
