// find minn and max using minimum no.of comparision
#include <iostream>
using namespace std;

void print(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}

// method 1 is using sorting but i takes O(nlogn) complexity
//  so here i use method 2 hich takes O(n) complexity
void min_max(int arr[], int size)
{
    int max, min;
    if (arr[0] >= arr[1])
    {
        max = arr[0];
        min = arr[1];
    }
    else
    {
        max = arr[1];
        min = arr[0];
    }
    for (int i = 2; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
   cout<<"Min : "<<min<<endl<<"Max : "<<max<<endl;
}
int main(int argc, char const *argv[])
{
    int n;
    cout << "Size : ";
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    print(arr, n);
    min_max(arr,n);
    
    return 0;
}
