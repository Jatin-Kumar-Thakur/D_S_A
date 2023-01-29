#include <iostream>
using namespace std;

void merge(int arr[], int lb, int mid, int ub)
{
    int size = lb + ub;
    int i, j, arr2[size];
    i = lb;
    j = mid + 1;
    int k = lb;
    while (i <= mid && j <= ub)
    {
        if (arr[i] > arr[j])
        {
            arr2[k] = arr[j];
            j++;
            k++;
        }
        else
        {
            arr2[k] = arr[i];
            i++;
            k++;
        }
    }
    if (i > mid)
    {
        while (j <= ub)
        {
            arr2[k] = arr[j];
            j++;
            k++;
        }
    }
    else
    {
        while (i <= mid)
        {
            arr2[k] = arr[i];
            i++;
            k++;
        }
    }
    for (int i = lb; i <= ub; i++)
    {
        arr[i] = arr2[i];
    }
}
void merge_sort(int arr[], int lb, int ub)
{
    int mid;
    if (lb < ub)
    {
        mid = (lb + ub) / 2;
        merge_sort(arr, lb, mid);
        merge_sort(arr, mid + 1, ub);
        merge(arr, lb, mid, ub);
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
    merge_sort(arr, 0, size - 1);
    print_array(arr, size);
    return 0;
}
