#include <iostream>
using namespace std;

int binary_search(int arr[], int low, int high, int x)
{
    while (low<=high)
    {
    int mid = (low + high) / 2;
        if (arr[mid]==x)
        {
            return mid;
        }
        
        else if (x > arr[mid])
        {
            low = mid + 1;
            // mid = (low + high) / 2;
        }
        else if (x < arr[mid])
        {
            high = mid - 1;
            // mid = (low + high) / 2;
        }
    }
    return -1;
}

int main(int argc, char const *argv[])
{
    int arr[] = {2, 4, 5, 6, 12, 23, 45, 56, 66, 78};
    int x, size = sizeof(arr) / sizeof(arr[0]);
    cout << "Enter Data Which you want to find : ";
    cin >> x;

    int res=binary_search(arr,0,size-1,x);
    if (res == -1)
    {
        cout << "Element is Not Found" << endl;
    }
    else
    {
        cout << "Element is present At location : " << res + 1<<endl;
    }
    cout<<endl;
    return 0;
}
