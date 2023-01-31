#include <iostream>
using namespace std;

int max(int arr[], int size)
{
    int max = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

void counting_sort(int arr[], int size)
{
    int m = max(arr, size);
    int a[m+1] = {0};
    int pos;
    int arr2[size];
    for (int i = 0; i < size; i++)
    {
        a[arr[i]]++;
    }
    for (int i = 1; i <= m; i++)
    {
        a[i]=a[i-1]+a[i];
    }
    
    for (int i = size-1; i >=0; i--)
    {
        int val=arr[i];
        a[val]--;
        arr2[a[val]]=arr[i];
    }
    for (int i = 0; i < size; i++)
    {
        arr[i]=arr2[i];
    }
    
    
    
    // for (int i = 0; i <= m; i++)
    // {
    //     if (a[i] > 0)
    //     {
    //         int temp=a[i];
    //         while (temp>0)
    //         {
                
    //         cout << i << " ";
    //         temp--;
    //         }
            
    //     }
    // }
    cout << endl;
}

void print_array(int arr[], int size)
{
    cout << endl
         << "Elements of array are : " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(int argc, char const *argv[])
{
    int size = 10;
    int arr[size];

    cout << "Enter size : ";
    cin >> size;
    cout << "Enter Elments of array : " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    print_array(arr, size);
    // int m = max(arr, size);
    // cout << m << endl;
    counting_sort(arr, size);
    print_array(arr, size);
    return 0;
}
