// 0 1 1 2 3 5 8 13 21

#include <iostream>
using namespace std;

int fibo(int n){
    if (n==0)
    {
        return 0;
    }
    else if (n==1)
    {
        return 1;
    }

    return fibo(n-1)+fibo(n-2);

    
    
}
int main(int argc, char const *argv[])
{
    int n,i=0;
    cout << "Enter n : ";
    cin >> n;
    while(n>=i){
    int x=fibo(i);
    cout<<x<<" ";
    i++;
    }
    // int n1=0,n2=1,n3;
    // cout<<n1<<" "<<n2<<" ";
    // for (int i = 1; i < n-1; i++)
    // {
    //     n3=n1+n2;
    //     cout<<n3<<" ";
    //     n1=n2;
    //     n2=n3;
    // }
    
    return 0;
}
