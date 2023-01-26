#include <iostream>
using namespace std;

void selection_sort(int arr[], int size)
{
    int temp, min, pos;
    for (int i = 0; i < size - 1; i++)
    {
        min = arr[i];
        temp = min;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < min)
            {
                min = arr[j];
                pos = j;
            }
        }
        arr[pos] = temp;
        arr[i] = min;
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
    selection_sort(arr, size);
    print_array(arr, size);
    return 0;
}
