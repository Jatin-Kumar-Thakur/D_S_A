#include <iostream>
using namespace std;

void swap(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int partition(int arr[], int lb, int ub)
{
    int start, end, pivot;
    start = lb;
    end = ub;
    pivot = arr[lb];
    while (start < end)
    {
        while (arr[start] <= pivot)
        {
            start++;
        }
        while (arr[end] > pivot)
        {
            end--;
        }
        if (start < end)
        {
            swap(arr[start], arr[end]);
        }
    }
    swap(arr[lb], arr[end]);
    return end;
}

void quick_sort(int arr[], int lb, int ub)
{
    if (lb < ub)
    {
        int res = partition(arr, lb, ub);
        quick_sort(arr, lb, res - 1);
        quick_sort(arr, res + 1, ub);
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
    quick_sort(arr, 0, size - 1);
    print_array(arr, size);
    return 0;
}
