// sum of n numbers
#include <iostream>
using namespace std;

void sum(int n, int s)
{
    if (n < 1){
        cout<<"sum = "<<s;
        return ;
    }
    
    sum(n-1,s+n);

}
int add(int n){
    if (n<1)
    {
        return n;   
    }
    return n+add(n-1);
    
}
int main(int argc, char const *argv[])
{
    sum(5, 0);
    int res=add(5);
    cout<<endl<<res;
    return 0;
}
