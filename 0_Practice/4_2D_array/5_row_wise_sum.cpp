// row wise sum
// col wise sum
// largest row sum
#include <iostream>
using namespace std;

void sum(int arr[][4], int n, int m)
{
    // col wise sum
    int sum = 0;
    int row = 0, max = 0;
    for (int i = 0; i < n; i++)
    {
        sum = 0;
        for (int j = 0; j < m; j++)
        {
            sum += arr[i][j];
        }
        cout << "Row " << i << " Sum : " << sum << endl;
        if (max < sum)
        {
            max = sum;
            row = i;
        }
    }
    cout << endl
         << "Max sum is : " << max << " of row No. : " << row << endl;
}
void print_2d(int ar[][4], int n, int m)
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
    int arr[4][4];
    cout << "Enter Array Elements : " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    print_2d(arr, 3, 3);
    sum(arr, n, m);
    return 0;
}
