//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template in C++

class Solution
{
public:
    // Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)
    {
        // code here
        int k = 0;
        int arr[n + m] = {0};
        for (int i = 0; i < n; i++)
        {
            arr[k] = a[i];
            k++;
        }
        int count = 0;
        for (int i = 0; i < m; i++)
        {
            count = 0;
            for (int j = 0; j < n; j++)
            {
                if (b[i] == a[j])
                {
                    count++;
                }
            }
            if (count == 0)
            {
                arr[k] = b[i];
                k++;
            }
        }
        k = 0;
        int size;
        while (arr[k] != 0)
        {
            size++;
            k++;
        }

        return size;
    }
};

//{ Driver Code Starts.

int main()
{

    int t;
    cout<<"T : ";
    cin >> t;

    while (t--)
    {

        int n, m;
        cout<<"n and M : ";
        cin >> n >> m;
        int a[n], b[m];
        cout<<"Enter array : ";
        for (int i = 0; i < n; i++)
            cin >> a[i];

        cout<<"Enter array :  ";
        for (int i = 0; i < m; i++)
            cin >> b[i];
        Solution ob;
        cout << ob.doUnion(a, n, b, m) << endl;
    }

    return 0;
}
// } Driver Code Ends