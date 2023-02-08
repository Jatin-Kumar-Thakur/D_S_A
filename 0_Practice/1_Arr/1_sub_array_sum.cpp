#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

void print(int arr[], int size)
{
    for (int x = 0; x < size; x++)
    {
        cout << arr[x] << " ";
    }
    cout << endl;
}
void sub_array(int arr[], int size, int x)
{
    vector<int> v;
    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size; j++)
        {
            v.clear();
            int sum = 0;
            for (int k = i; k <= j; k++)
            {
                v.push_back(arr[k]);
            }
            for (int i : v)
            {
                sum = sum + i;
            }
            if (sum == x)
            {
                cout<<"Sub-Array : ";
                for (int l : v)
                {
                    cout << l << " ";
                }
                cout << endl;
            }
        }
    }
}
int main(int argc, char const *argv[])
{
    int size,sum;
    cout << "Enter size Of Array  : ";
    cin >> size;
    cout << "Enter sum  : ";
    cin >> sum;
    int arr[size];
    cout << "Enter Array Elements : " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    // print(arr, size);
    sub_array(arr, size, sum);
    return 0;
}
