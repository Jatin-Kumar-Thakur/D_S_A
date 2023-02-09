#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
// way 1 to do this is sorting
void kth_max(int arr[], int size, int k)
{
    // vector<int> v;
    sort(arr, arr + size);
    for (int i = size - 1; i >= k; i--)
    {
        if (i == k + 1)
        {

            cout << arr[i] << endl;
        }
    }
}

void print(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void kth_max_method2(int arr[], int size, int k)
{
    vector<int> v;
    for (int i = 0; i < k; i++)
    {
        int max = i; // 34
        for (int j = i; j < size; j++)
        {
            if (arr[max] < arr[j])
            {
                max = j;
            }
        }
        v.push_back(arr[max]);
        swap(arr[max], arr[i]);
    }
    cout << v[k-1];
}
int main(int argc, char const *argv[])
{
    int n, pos;
    cout << "Enter size : ";
    cin >> n;
    int arr[n];
    cout << "Enter array : " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << endl
         << "Array : ";
    print(arr, n);
    cout << "Enter position from end : ";
    cin >> pos;
    // kth_max(arr, n, pos);

    kth_max_method2(arr, n, pos);
    cout << endl
         << "Array : ";
    print(arr, n);
    return 0;
}
// 34 23 12 67 56