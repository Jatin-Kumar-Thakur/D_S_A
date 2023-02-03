// sum of n numbers
#include <iostream>
using namespace std;

void reverse(int arr[],int n,int i){
    if (i>=n/2)
    {
        return;
    }
    swap(arr[i],arr[n-i-1]);
    reverse(arr,n,i+1);

    
}
int main(int argc, char const *argv[])
{
    int arr[5]={2,4,1,5,6};
    reverse(arr,5,0);
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}
