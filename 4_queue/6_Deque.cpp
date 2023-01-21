#include <iostream>
using namespace std;

class deque
{
public:
    int data, size,front, rear;
    int arr[];
    deque(int size)
    {
        this->size = size;
        arr[size];
        front = -1;
        rear = -1;
    }
    void inst_at_beg(int data);
    void inst_at_end(int data);
    void delete_from_beg();
    void delete_from_end();
    void display();
};
void deque::inst_at_beg(int data){
    if (front==0 && rear==size-1)
    {
        cout<<"Deque is Full"<<endl;
    }
    else
    {
        if (front==-1 && rear==-1)
        {
            front=rear=0;
            arr[front]=data;
        }
        else if (front!=0)
        {
            front--;
            arr[front]=data;
        }
        else
        {
            cout<<"Front overflow"<<endl;
        }
        
    }
    
}
void deque::inst_at_end(int data){
    if (front==0 && rear==size-1)
    {
        cout<<"Deque is Full"<<endl;
    }
    else
    {
        if (front==-1 && rear==-1)
        {
            front=rear=0;
            arr[rear]=data;
        }
        else if (rear<size-1)
        {
            rear++;
            arr[rear]=data;
        }
        else
        {
            cout<<"Rear overflow"<<endl;
        }
        
    }
    
}
void deque::delete_from_beg(){
    if (front==-1 && rear==-1)
    {
        cout<<"Deque is Empty"<<endl;
    }
    else
    {
        if (front==rear)
        {
            front=rear=-1;
        }
        else
        {
            front++;
        }
        
        
    }
    
}
void deque::delete_from_end(){
    if (front==-1 && rear==-1)
    {
        cout<<"Deque is Empty"<<endl;
    }
    else
    {
        if (front==rear)
        {
            front=rear=-1;
        }
        else
        {
            rear--;
        }
        
        
    }
    
}
void deque::display(){
    if (front==-1 && rear==-1)
    {
        cout<<"Deque is Empty"<<endl;
    }
    else
    {
        int temp=front;
        while(temp!=rear){
            cout<<arr[temp]<<" ";
            temp++;
        }
        cout<<arr[temp]<<endl;
    }
    
}
int main(int argc, char const *argv[])
{
    cout<<endl;
    deque d(5);
    d.inst_at_beg(10);
    // d.inst_at_beg(20);
    d.inst_at_end(30);
    d.inst_at_end(40);
    d.delete_from_beg();
    d.delete_from_end();
    d.display();

    cout<<endl;
    return 0;
}
