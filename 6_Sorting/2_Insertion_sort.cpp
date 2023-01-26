#include <iostream>
using namespace std;

void Insertion_sort(int arr[], int size)
{
    int temp;
    for (int i = 1; i < size; i++)
    {
        temp = arr[i];
        int j = i - 1;
        while ((temp < arr[j]) && (j>=0))
        {
            arr[j+1] = arr[j];
            arr[j] = temp;
            j--;
        }
        
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
    Insertion_sort(arr, size);
    print_array(arr, size);
    return 0;
}
