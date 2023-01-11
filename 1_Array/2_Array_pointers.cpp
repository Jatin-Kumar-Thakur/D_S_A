#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n = 20, size = 4;
    int arr[size] = {1, 9, 3, 4};
    // cout<<endl<<"Enter size of Array : ";
    // cin>>size;
    // cout<<endl<<"Enter elements of array :"<<endl;
    // for (int i = 0; i < size; i++)
    // {
    //     cin>>arr[i];
    // }
    cout << endl
         << "Elements of Array are :" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    
    // arr - store base address
    //& - in c it denotes address
    // c++ - array name contain address
    // but agr apn ko koi variaval ka poiter banananahai toh & use krna pdega
    // int j=10;
    // int *p=&j;
    int *p=arr;
    int *ptr=&arr[1];
    cout << endl
         << " p     : " << p << endl;
    cout << "*p     : " << *p << endl;
    cout << "&arr   : " << &arr << endl;
    cout << " arr   : " << arr << endl;
    cout << " arr[2]: " << arr[2] << endl;
    cout << " *arr  : " << *arr << endl;
    // cout << " arr++ : " << arr++ << endl; //not allowed
    cout << " p[1]  : " << p[1] << endl;
    // cout << " p[1]  : " << *p[1] << endl;  // not valid
    // cout << " p(1)  : " << p(1) << endl;  // not valid
    cout << " p[0]  : " << p[0] << endl;
    // cout << "*p++   : " << *p++ << endl; //after this point point to next element of array
    cout << "*p+1   : " << *p+1 << endl;  //it added value to *p
    cout << "*(p+1) : " << *(p+1) << endl;  
    // cout << " p++   : " << p+1 << endl;   // should not b incremented
    cout << " p+1   : " << p+1 << endl;
    cout << " *(p+1): " << *(p+1) << endl;
    cout << " p+2   : " << p+2 << endl;
    cout << " arr+2 : " << arr+2<<endl;
    // cout << " arr+1  : " << arr++<<endl; // not valid

    // cout << " *(p/2)   : " << *(p/2) << endl;  //Not valid
    
    cout<<endl<<"Print Array Elements using Pointer : "<<endl<<"*(p+i) : ";
    for (int i = 0; i < size; i++)
    {
        cout<<*(p+i)<<" ";
    }
    cout<<endl<<"p[i]   : ";
    for (int i = 0; i < size; i++)
    {
        cout<<p[i]<<" ";
    }
    cout<<endl<<"i[p]   : ";
    for (int i = 0; i < size; i++)
    {
        cout<<i[p]<<" ";
    }
    cout<<endl<<"arr[i]   : ";
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}
