#include <iostream>
using namespace std;

int LinearSearch(int arr[], int size, int x)
{
    int pos = -1;
    if (size == 0)
    {
        return pos;
    }
    else
    {
        for (int i = 0; i < size; i++)
        {
            if (arr[i] == x)
            {
                pos = i;
                break;
            }
        }
    }
    return pos;
}

int main(int argc, char const *argv[])
{
    cout<<endl;
    int arr[] = {2, 3, 12, 45, 23, 22};
    int x, size = sizeof(arr) / sizeof(arr[0]);
    cout << "Enter Element Which you want to find : ";
    cin >> x;

    int res = LinearSearch(arr, size, x);
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
