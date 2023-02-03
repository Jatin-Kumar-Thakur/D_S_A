//Print name 5 times
#include<iostream>
using namespace std;

void printName(string name,int n){
    if (n<1)
    {
        return ;
    }
    cout<<name<<endl;
    printName(name,n-1);
}
int main(int argc, char const *argv[])
{
    string name;
    cout<<"Enter Name : ";
    cin>>name;
    printName(name,5);
    return 0;
}
