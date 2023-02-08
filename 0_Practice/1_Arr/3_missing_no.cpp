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
void sequence(int arr[], int &size)
{
    int x = (arr[0] + arr[1]) % 2;
    for (int i = 0; i < size-1 ; i++)
    {
        if (((arr[i] + arr[i + 1]) % 2) != x)
        {
            size++;
            for (int j = size-1 ; j > i; j--)
            {
                arr[j] = arr[j - 1];
            }
            arr[i + 1] = (arr[i] + arr[i + 2]) / 2;
            return;
        }
    }
}
void missing_num(int arr[],int size){
    size++;
    int total=(size*(size+1))/2;
    int sum=0;
    for (int i = 0; i < size-1; i++)
    {
        sum=sum+arr[i];
    }
    int missing=total-sum;
    cout<<"Missing Number is : "<<missing<<endl;

    
}
int main(int argc, char const *argv[])
{
    int size;
    cout << "Enter size : ";
    cin >> size;
    int arr[size];
    cout << "Enter array elements : " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    // cout << "Array : ";
    missing_num(arr,size);
    sequence(arr, size);
    print(arr, size);
    return 0;
}
