#include<iostream>
using namespace std;

int fact(int n){
    if (n<=1)
    {
        return 1;
    }
    else{
        return fact(n-1)*n;
    }
    
}
int main(int argc, char const *argv[])
{
    int n=5;
    int res=fact(5);
    cout<<res;
    return 0;
}
