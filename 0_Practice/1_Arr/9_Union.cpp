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

void union_array(int arr[], int a[], int n, int m, vector<int> v)
{
    // merge two array and sort and then take unione
    vector<int> v2;
    int i = 0, j = 0;
    while (i < n)
    {
        v2.push_back(arr[i]);
        i++;
    }
    while (j < m)
    {
        v2.push_back(a[j]);
        j++;
    }
    sort(v2.begin(), v2.end());

    for (int i = 0; i < v2.size(); i++)
    {
        if (v2[i] != v2[i + 1])
        {
            v.push_back(v2[i]);
        }
        else
        {
            int j = i + 1;
            while (v2[j] == v2[i])
            {
                i++;
                j++;
            }
            v.push_back(v2[i]);
        }
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}
int main(int argc, char const *argv[])
{
    int n, m;
    vector<int> v;
    cout << "Enter size N and M : ";
    cin >> n >> m;

    int arr[n], a[m];
    array_ip(arr, n);
    array_ip(a, m);
    print(arr, n);
    print(a, m);
    union_array(arr, a, n, m, v);
    return 0;
}
