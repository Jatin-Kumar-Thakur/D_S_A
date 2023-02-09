#include <iostream>
#include<algorithm>
using namespace std;

void print(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void merge(int arr[], int arr2[], int arr3[], int size1, int size2)
{
    int i = 0;
    int j = 0, z = 0;
    while (i < (size1 + size2))
    {
        if (arr2[j] < arr3[z] && j < size1)
        {
            arr[i] = arr2[j];
            j++;
        }
        else if (arr2[j] > arr3[z] && z < size2)
        {
            arr[i] = arr3[z];
            z++;
        }

        i++;
    }
    if (j >= size1)
    {
        while (z < size2)
        {
            arr[i] = arr3[z];
            z++;
            i++;
        }
    }
    else
    {
        while (j < size1)
        {
            arr[i] = arr2[j];
            j++;
            i++;
        }
    }
}
int main(int argc, char const *argv[])
{
    int size1, size2;
    cout << "Enter size : ";
    cin >> size1;
    int arr[size1];
    cout << "Enter array 1 elements : " << endl;
    for (int i = 0; i < size1; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter size 2 : ";
    cin >> size2;
    int a[size2];
    cout << "Enter array 2 elements : " << endl;
    for (int i = 0; i < size2; i++)
    {
        cin >> a[i];
    }
    sort(arr,arr+size1);
    sort(a,a+size2);
    // print(arr, size1);
    // print(a, size2);

    int array[size1 + size2]={0};
    merge(array,arr,a,size1,size2);
    print(array, (size1 + size2));
    return 0;
}
