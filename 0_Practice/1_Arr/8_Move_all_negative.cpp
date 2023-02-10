// move all negative to one side of an array
#include <iostream>
using namespace std;

void print(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}
void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}
void move(int arr[],int n){
    int j=0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]<0)
        {
            if (arr[j]>0)
            {
            swap(arr[i],arr[j]);
            j++;
                
            }
            else{
                j++;
            }
        }
        
    }
    
}

int main(int argc, char const *argv[])
{
    int n;
    cout << "Size : ";
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout<<"print : ";
    print(arr, n);
    move(arr,n);
    print(arr, n);
    
    
    return 0;
}
