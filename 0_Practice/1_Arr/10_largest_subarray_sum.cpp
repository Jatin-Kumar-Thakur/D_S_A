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
void array_ip(int arr[], int size)
{
    cout << "Enter Array : " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
}
void print(int arr[], int size)
{
    cout << "Array : ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void subarray_sum(int arr[], int n)
{
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int sum = 0;
            for (int k = i; k <= j; k++)
            {
                sum = sum + arr[k];
            }
            v.push_back(sum);
        }
    }
    sort(v.begin(), v.end());
    int size = v.size();
    cout << v[size - 1];
}
int main(int argc, char const *argv[])
{
    int n, m;
    vector<int> v;
    cout << "Enter size N and M : ";
    cin >> n >> m;

    int arr[n];
    array_ip(arr, n);
    print(arr, n);
    subarray_sum(arr, n);
    return 0;
}
