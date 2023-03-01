#include <iostream>
#include <string>
using namespace std;

void reverse(string str, int len)
{
    if (len == 0)
    {
        cout << str[len] << endl;
        return;
    }
    cout << str[len] ;
    reverse(str, len - 1);
}
int main(int argc, char const *argv[])
{
    string str;
    cout << "Enter String : ";
    cin >> str;
    int len = str.length();
    reverse(str,len);
    return 0;
}
