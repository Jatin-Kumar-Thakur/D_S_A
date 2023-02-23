// rotate matrix my 90 degree
// input
// 1 2 3
// 4 5 6
// 7 8 9

// output
// 7 4 1
// 8 5 2
// 9 6 3
//  input
//  1 2 3
//  4 5 6
//  7 8 9

// output
// 1 2 3 6 9 8 7 4 5

#include <iostream>
using namespace std;

void rotate_print(int arr[][5], int n, int m)
{
    cout << "After 90 Degree rotation : " << endl;
    for (int j = 0; j < m; j++)
    {
        for (int i = n - 1; i >= 0; i--)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
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
    cout << "Enter N and m and p : ";
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
    rotate_print(arr, n, m);
    return 0;
}
