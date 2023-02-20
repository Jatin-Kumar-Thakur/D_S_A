#include <iostream>
using namespace std;

// 1 2 3     4 5 6
// 4 5 6     7 8 9
// 7 8 9     1 2 3
void multip(int arr[][4], int arr2[][4], int a[][4], int n, int m, int p)
{
    // (row of one * col of another one) is the size of new matrix
    // for multiplication ==> ((col of one matrix == row of another)) ==> must
    a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < p; j++)
        {
            a[i][j] = 0;
            for (int k = 0; k < m; k++)
            {
                a[i][j] = a[i][j] + arr[i][k] * arr2[k][j];
            }
        }
    }
}
void print(int arr[][4], int n, int m)
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
    int n, m, p;
    cout << "Enter N and m and p : ";
    cin >> n >> m >> p;
    int arr[4][4];
    int arr2[4][4];
    int a[4][4];
    cout << "Enter array elements : " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << "Enter array 2 Elements : " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < p; j++)
        {
            cin >> arr2[i][j];
        }
    }

    print(arr, n, m);
    print(arr2, m, p);

    multip(arr, arr2, a, n, m, p);
    print(a, n, p);
    return 0;
}
