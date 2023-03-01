#include <iostream>
using namespace std;

bool sorted_ary(int arr[], int n)
{
    if (n == 0)
    {
        return true;
    }
    if (arr[n] <= arr[n - 1])
    {
        return false;
    }
    return sorted_ary(arr, n - 1);
    // return false;
}
void print(int arr[], int n)
{
    cout << "Array : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main(int argc, char const *argv[])
{
    int n;
    cout << "Enter n : ";
    cin >> n;

    int arr[n];
    cout << "Enter Array Elments : " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    print(arr, n);
    bool val = sorted_ary(arr, n-1);
    if (val == 0)
    {
        cout << "False" << endl;
    }
    else
    {
        cout << "True" << endl;
    }

    return 0;
}
