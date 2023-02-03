// Print 1 to n linearnly
#include <iostream>
using namespace std;

void print(int n, int val)
{
    if (val > n)
    {
        return;
    }
    cout << val << endl;
    print(n, val+1);
}

// print n to 1

void print2(int n){
    if (n<1)
    {
        return;
    }
    cout<<n<<endl;
    print2(n-1);
    
}
int main(int argc, char const *argv[])
{
    int n;
    cout << "Enter N : ";
    cin >> n;
    print(n, 1);
    cout<<endl;
    print2(n);
    return 0;
}
