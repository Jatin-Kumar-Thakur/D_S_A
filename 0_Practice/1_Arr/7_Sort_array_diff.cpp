// sort an arrray which consisting 0 1 2 with using sorting
// find minn and max using minimum no.of comparision
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

void sort(int arr[], int n)
{
    int a[3] = {0};
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            a[0]++;
        }
        else if (arr[i] == 1)
        {
            a[1]++;
        }
        else
        {
            a[2]++;
        }
    }

    int j = 0;
    for (int i = 0; i < 3; i++)
    {
        while (a[i] > 0)
        {
            arr[j] = i;
            // cout<<i;
            a[i]--;
            // cout<<arr[j]<<" ";
            j++;
        }
        // cout<<endl;
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

    cout << "print : ";
    print(arr, n);
    sort(arr, n);
    print(arr, n);

    return 0;
}
