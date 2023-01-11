#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n=20,m=20,arr[n][m];
    cout<<endl<<"Enter Number of Rows : ";
    cin>>n;
    cout<<"Enter Number of Column : ";
    cin>>m;
    // This is a row major implimentation
    // IN this first we have to insert row 0 element first then second row and so on
    cout<<endl<<"Enter Elements of Array : "<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>arr[i][j];
        }
        
    }
    cout<<endl<<"2D Array Elements are : "<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
                cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    
    return 0;
}
