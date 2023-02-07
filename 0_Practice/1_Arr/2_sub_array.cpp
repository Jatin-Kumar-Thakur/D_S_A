#include<iostream>
using namespace std;

void subArray(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size; j++)
        {
            
            for (int k = i; k <= j; k++)
            {
                cout<<arr[k]<<" ";
            }
            cout<<endl;
            
        }
        cout<<endl;
        
    }
    
}
void print(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(int argc, char const *argv[])
{
    int n;
    cout<<"Enter size : ";
    cin>>n;
    int arr[n];
    cout<<"Enter Array Elements : "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    print(arr,n);
    subArray(arr,n);
    return 0;
}
