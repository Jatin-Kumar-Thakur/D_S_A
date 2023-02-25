
#include <iostream>
using namespace std;

void binary_search(int arr[][5], int n, int m, int data)
{
    int maxc = m - 1;
    int minr = 0;
    int count = 0;
    while (minr < n && maxc >= 0)
    {
        if (data == arr[minr][maxc])
        {
            cout << "Data found at pos i = " << minr << " j = " << maxc << endl;
            count++;
            break;
        }
        else if (data > arr[minr][maxc])
        {
            minr++;
        }
        else if (data < arr[minr][maxc])
        {
            maxc--;
        }
    }
    if (count == 0)
    {
        cout << "Data is not exist" << endl;
    }
}
void print(int arr[][5], int n, int m)
{
    cout << "Array Matrix " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
int main(int argc, char const *argv[])
{
    int n, m;
    cout << "Enter N and m : ";
    cin >> n >> m;
    int arr[5][5];
    cout << "Enter array elements : " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    // int n = 3, m = 3;
    // int arr[3][3] = {{1, 2, 3},
    //                  {4, 5, 6},
    //                  {7, 8, 9}};
    print(arr, n, m);

    int data;
    cout << "Enter the Data which you want to search : ";
    cin >> data;
    binary_search(arr, n, m, data);
    return 0;
}
