#include <iostream>
using namespace std;

int getMax(int arr[], int size)
{
    int max = 0;
    for (int i = 0; i < size; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    return max;
}
void countSort(int arr[], int size, int pos)
{
    int count[10] = {0};
    int a[size];
    for (int i = 0; i < size; i++)
    {
        count[(arr[i] / pos) % 10]++;
    }
    for (int i = 1; i < 10; i++)
    {
        count[i] = count[i] + count[i - 1];
    }
    for (int i = size - 1; i >= 0; i--)
    {
        count[(arr[i] / pos) % 10]--;
        a[count[(arr[i] / pos) % 10]] = arr[i];
    }
    for (int i = 0; i < size; i++)
    {
        arr[i] = a[i];
    }
}
void radix_sort(int arr[], int size)
{
    int max = getMax(arr, size);
    for (int pos = 1; (max / pos) > 0; pos = pos * 10)
    {
        countSort(arr, size, pos);
    }
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
    radix_sort(arr, size);
    print_array(arr, size);
    return 0;
}
