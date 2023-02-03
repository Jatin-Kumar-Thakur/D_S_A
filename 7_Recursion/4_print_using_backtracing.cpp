// print 1 to n using back tracing
#include<iostream>
using namespace std;


void print(int n,int i){
    if (i<1)
    {
        return;
    }
    print(n,i-1);
    cout<<i<<endl;
    
}

//print n to 1 by back tracing
void print2(int n,int i){
    if (n<i)
    {
        return;
    }
    print2(n,i+1);
    cout<<i<<endl;
    // cout<<i<<endl;
    
}

int main(int argc, char const *argv[])
{
    print(5,5);
    cout<<endl;
    print2(5,1);
    return 0;
}
