#include <iostream>
using namespace std;
void linear_search(int arr[][3], int n, int m, int val)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == val)
            {
                cout << "Index at : " << i << "th Row"
                     << "And " << j << "th column";
                break;
            }
        }
    }
}
void print_2d(int ar[][3], int n, int m)
{
    cout << "Array :" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << ar[i][j] << " ";
        }
        cout << endl;
    }
}

int main(int argc, char const *argv[])
{
    int n = 3, m = 3;
    int arr[3][3];
    cout << "Enter Array Elements : " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    print_2d(arr, 3, 3);
    linear_search(arr, n, m, 6);
    return 0;
}
