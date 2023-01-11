#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
};

void createNewNode(node* &head,node* &temp,node* &end,int data){
    node *newnode=new node();
    newnode->data=data;
    if (head==0)
    {
        head=temp=end=newnode;
        newnode->next=head;
    }
    else
    {
        end=newnode;
        temp->next=newnode;
        newnode->next=head;
        temp=temp->next;
    }
    
}
void InsertionAtStart(node* &head,node* &temp,node* &end,int data){
    node *newnode=new node();
    newnode->data=data;
    if (head==0)
    {
        head=temp=end=newnode;
        newnode->next=head;
    }
    else
    {
        newnode->next=head;
        end->next=newnode; 
        head=newnode;
    }
    
}
void InsertionAtEnd(node* &head,node* &temp,node* &end,int data){
    node *newnode=new node();
    newnode->data=data;
    if (head==0)
    {
        head=temp=end=newnode;
        newnode->next=head;
    }
    else
    {
        // temp=head;
        // while(temp->next!=head){
        //     temp=temp->next;
        // }
        // temp->next=newnode;
        newnode->next=head;
        end->next=newnode;
        end=newnode;
    }
    
}
void InsertionAtRendomPosition(node* &head,node* &temp,node* &end,int data,int pos){
    node *newnode=new node();
    newnode->data=data;
    
    temp=head;
    int position=1,length=1;
    while(temp->next!=head){
        length++;
        temp=temp->next;
    }
    // cout<<endl<<length<<endl;
    if (pos>length+1)
    {
        cout<<"Input Position is Invalid "<<endl;
        return;
    }
    else if(pos==length+1){
        InsertionAtEnd(head,temp,end,data);
    }
    else if (pos==1)
    {
        InsertionAtStart(head,temp,end,data);
    }
    else{

    while(position!=pos){
        temp=temp->next;
        position++;
    }
    newnode->next=temp->next;
    temp->next=newnode;
    temp=temp->next;
    }

}
void deletionFromStart(node* &head,node* &temp,node* &end){
    if (head==0)
    {
        cout<<"Deletion is Not possible Because List is Empty"<<endl;
        return;
    }
    temp=head;
    head=head->next;
    end->next=head;
    delete temp;
    
}
void deletionFromEnd(node* &head,node* &temp,node* &end){
    if (head==0)
    {
        cout<<"Deletion is Not possible Because List is Empty"<<endl;
        return;
    }
    temp=head;
    while(temp->next!=end){
        temp=temp->next;
    }
    cout<<endl<<temp->data<<endl;
    // temp->next=end->next;
    end=temp;
    temp=temp->next;
    end->next=head;
    // temp=temp->next;
    delete temp;
    
}
void display(node * &head,node* &temp){
    temp=head;
    if (head==0)
    {
        cout<<"Linked List is Empty : "<<endl;
    }
    else
    {
        while(temp->next!=head){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<temp->data;
        cout<<endl;
    }
    
}
int main(int argc, char const *argv[])
{
    node *head=0,*temp=0,*newnode=0,*end=0;
    int choice=0;
    cout<<"Enter Choice : ";
    cin>>choice;
    while (choice)
    {
        int data;
        cout<<"Enter Data of NewNode : ";
        cin>>data;
        createNewNode(head,temp,end,data);
        cout<<"Enter Choice : ";
        cin>>choice;
    }
    display(head,temp);
    cout<<endl;
    InsertionAtStart(head,temp,end,20);
    display(head,temp);
    cout<<endl;
    InsertionAtEnd(head,temp,end,40);
    display(head,temp);
    cout<<endl;
    cout<<"first ";
    InsertionAtRendomPosition(head,temp,end,70,6);
    display(head,temp);
    cout<<endl;
    cout<<"second ";
    InsertionAtRendomPosition(head,temp,end,60,2);
    display(head,temp);
    cout<<endl;
    cout<<"third ";
    InsertionAtRendomPosition(head,temp,end,50,3);
    display(head,temp);
    cout<<endl;
    deletionFromStart(head,temp,end);
    display(head,temp);
    deletionFromEnd(head,temp,end);
    display(head,temp);
    return 0;
}
