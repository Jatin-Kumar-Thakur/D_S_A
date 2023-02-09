#include<iostream>
using namespace std;

void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}
void reverse(int arr[],int size){
    int i=0;
    while (i<(size/2)){
        swap(arr[i],arr[size-1-i]);
        i++;
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
    cout<<"Enter array : "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    reverse(arr,n);
    print(arr,n);

    return 0;
}
