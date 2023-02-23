// input
// 1 2 3
// 4 5 6
// 7 8 9

// output
// 1 2 3
// 6 5 4
// 7 8 9

// or

// 1 4 7
// 2 5 8
// 3 6 9

// input
// 1 2 3
// 4 5 6
// 7 8 9

// output
// 1 2 3 6 9 8 7 4 5

#include <iostream>
using namespace std;

void wave_print(int arr[][5], int n, int m)
{
    cout << endl
         << "Wave print" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
        if (i < n - 1)
        {
            i++;
            for (int j = m - 1; j >= 0; j--)
            {
                cout << arr[i][j] << " ";
            }
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
    wave_print(arr, n, m);
    return 0;
}
