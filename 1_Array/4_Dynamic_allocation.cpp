#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin>>n;

    int *arr=new int[n];

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Array : "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    n++;
    cin>>arr[n-1];
    cout<<"Array : "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }

    
    return 0;
}
