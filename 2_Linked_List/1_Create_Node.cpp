#include<iostream>
using namespace std;

//first i have to create a (class-data type)  which contains a data and a pointer 
class Node{
   public:
   int data;
   Node *next;
};

int main(int argc, char const *argv[])
{
    Node *n1=new Node();
    cout<<"Enter Data of New Node : ";
    cin>>n1->data;
    n1->next=NULL;
    cout<<"Data : "<<n1->data<<endl;
    cout<<"Address : "<<n1->next<<endl;
    return 0;
}
