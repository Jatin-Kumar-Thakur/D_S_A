#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node* pre;
};
void createNewNode(node* &head,node* &tail,node* &temp,int data){
    node *newnode=new node();
    newnode->data=data;
    newnode->next=0;
    newnode->pre=0;
    if (head==0)
    {
        head=temp=tail=newnode;
        head->next=newnode;
        head->pre=tail;
    }
    else
    {
        newnode->pre=tail;
        newnode->next=head;
        head->pre=newnode;
        tail->next=newnode;
        tail=newnode;
    }
    
}
int length(node* head,node *tail,node* temp){
    temp=head;
    int length=0;
    if (head==0)
    {
        return length;
    }
    else
    {
        while(temp->next!=head){
            length++;
            temp=temp->next;
        }
        length++;
        return length;
    }
    
}
void insertionAtStart(node* &head,node* &tail,node* &temp,int data){
    node *newnode=new node();
    newnode->data=data;
    newnode->next=0;
    newnode->pre=0;
    if (head==0)
    {
        head=tail=temp=newnode;
        head->next=newnode;
        head->pre=tail;
    }
    else
    {
        newnode->next=head;
        newnode->pre=tail;
        head->pre=newnode;
        head=newnode;
        tail->next=newnode;
    }
    
}
void insertionAtEnd(node* &head,node* &tail,node* &temp,int data){
    node *newnode=new node();
    newnode->data=data;
    newnode->next=0;
    newnode->pre=0;
    if (head==0)
    {
        head=tail=temp=newnode;
        head->next=newnode;
        head->pre=tail;
    }
    else
    {
        newnode->next=head;
        newnode->pre=tail;
        tail->next=newnode;
        head->pre=newnode;
        tail=newnode;
    }
    
}

void insertionAtRandomPosition(node* &head,node* &tail,node* &temp,int data,int pos){
    node *newnode=new node();
    newnode->data=data;
    newnode->next=0;
    newnode->pre=0;
    int len=length(head,tail,temp);
    if (pos>len+1)
    {
        cout<<"Invalid Position Input"<<endl;
    }
    else if (pos==1)
    {
        insertionAtStart(head,tail,temp,data);
    }
    else if (pos==len+1)
    {
        insertionAtEnd(head,tail,temp,data);
    }
    else{
        int position=1;
        temp=head;
        while (position<pos)
        {
            temp=temp->next;
            position++;
        }
        newnode->next=temp;
        newnode->pre=temp->pre;
        temp->pre=newnode;
        newnode->pre->next=newnode;
    }    
}

void deletionFromStart(node* &head,node* &tail,node* temp){
    temp=head;
    if (head==0)
    {
        cout<<"Deletion Is not possible Bcz List is Empty : ";
    }
    else
    {
        tail->next=head->next;
        head=head->next;
        head->pre=tail;
        delete temp;
    }
    
}
void deletionFromEnd(node* &head,node* &tail,node* temp){
    temp=tail;
    if (head==0)
    {
        cout<<"Deletion Is not possible Bcz List is Empty : ";
    }
    else
    {
       head->pre=tail->pre;
       tail=tail->pre;
       tail->next=head;
       delete temp;
    }
}
void deletionFromRandomPosition(node* &head,node* &tail,node* temp,int pos){
    int len=length(head,tail,temp);

    if (head==0)
    {
        cout<<"Deletion Is not possible Bcz List is Empty : "<<endl;
    }
    else
    {
        if (pos>len)
        {
            cout<<"Invalid Position input"<<endl;
        }       
        else if (pos==1)
        {
            deletionFromStart(head,tail,temp);
        }
        else if (pos==len)
        {
            deletionFromEnd(head,tail,temp);
        }
        else
        {
            int position=1;
            temp=head;
            while(position<pos){
                temp=temp->next;
                position++;
            }
            temp->pre->next=temp->next;
            temp->next->pre=temp->pre;
            delete temp;
        }
        
    }
    
}

void display_forword(node* head,node* tail,node* temp){
    if (head==0)
    {
        cout<<"List Is Empty : ";
    }
    else
    {
        temp=head;
        while (temp->next!=head)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<temp->data;
        cout<<endl;
    }
    
}
void display_reverse(node* head,node* tail,node* temp){
    if (tail==0)
    {
        cout<<"List Is Empty : ";
    }
    else
    {
        temp=tail;
        while (temp->pre!=tail)
        {
            cout<<temp->data<<" ";
            temp=temp->pre;
        }
        cout<<temp->data;
        cout<<endl;
    }
    
}
int main(int argc, char const *argv[])
{
    node *head=0,*newnode=0,*temp=0,*tail=0;
    int choice=0;
    cout<<"Enter Choice : ";
    cin>>choice;
    while (choice)
    {
        int data;
        cout<<"Enter Data Of NewNode : ";
        cin>>data;
        createNewNode(head,tail,temp,data);
        cout<<"Enter Choice : ";
        cin>>choice;
    }
    cout<<endl;
    display_forword(head,tail,temp);
    display_reverse(head,tail,temp);

    insertionAtStart(head,tail,temp,99);
    display_forword(head,tail,temp);
    display_reverse(head,tail,temp);
    cout<<endl;
    // cout<<head->data<<endl;
    // cout<<tail->next->data<<endl;
    // cout<<head->pre->data<<endl;

    insertionAtEnd(head,tail,temp,100);
    display_forword(head,tail,temp);
    display_reverse(head,tail,temp);
    cout<<endl;
    // cout<<tail->data<<endl;
    // cout<<tail->next->data<<endl;
    // cout<<head->pre->data<<endl;
    
    insertionAtRandomPosition(head,tail,temp,200,3);
    display_forword(head,tail,temp);
    display_reverse(head,tail,temp);
    cout<<endl;

    deletionFromStart(head,tail,temp);
    display_forword(head,tail,temp);
    display_reverse(head,tail,temp);
    cout<<endl;

    deletionFromEnd(head,tail,temp);
    display_forword(head,tail,temp);
    display_reverse(head,tail,temp);
    cout<<endl;

    deletionFromRandomPosition(head,tail,temp,2);
    display_forword(head,tail,temp);
    display_reverse(head,tail,temp);
    cout<<endl;

    cout<<endl<<"Length Of Link List : "<<length(head,tail,temp)<<endl;

    return 0;
}
