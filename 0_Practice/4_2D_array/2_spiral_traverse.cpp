// input
// 1 2 3
// 4 5 6
// 7 8 9

// output
// 1 2 3 6 9 8 7 4 5

#include <iostream>
using namespace std;

void spiral_print(int arr[][5], int n, int m)
{
    int minr = 0, minc = 0, maxr = n - 1, maxc = m - 1;
    int total = (n * m);
    int count = 0;
    while (count < total)
    {
        for (int i = minc; i <= maxc && count < total; i++)
        {
            int j = minr;
            cout << arr[j][i] << " ";
            count++;
        }
        minr++;
        for (int i = minr; i <= maxr && count < total; i++)
        {
            int j = maxc;
            cout << arr[i][j] << " ";
            count++;
        }
        maxc--;
        for (int j = maxc; j >= minc && count < total; j--)
        {
            int i = maxr;
            cout << arr[i][j] << " ";
            count++;
        }
        maxr--;
        for (int i = maxr; i >= minr && count < total; i--)
        {
            int j = minc;
            cout << arr[i][j] << " ";
            count++;
        }
        minc++;
        // cout << endl;
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
    spiral_print(arr, n, m);
    return 0;
}
