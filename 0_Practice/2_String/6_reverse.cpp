// reverse a given string
// reverse a given string on its place
#include <iostream>
#include <string>
using namespace std;

string reverse_on_place(string str)
{
    // cout << "hello" << endl;
    string s = "";
    int j = 0, k = -1;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == 32 || i == str.length() - 1)
        {
            j = i;
            while (j != k)
            {
                s = s + str[j];
                j--;
            }
            s = s + " ";
            k = i;
        }
    }
    return s;
}
string reverse(string str)
{
    string s = "";
    for (int i = str.length() - 1; i >= 0; i--)
    {
        s = s + str[i];
    }
    return s;
}
int main(int argc, char const *argv[])
{
    // string str;
    // cout << "Enter string : ";
    // cin >> str;

    // string s = reverse(str);
    // cout << "Reverse String is : " << s << endl;

    // another way
    string s;
    cout << "Enter string 2 : ";
    getline(cin, s);

    string x = reverse_on_place(s);
    cout << "Reverse String : " << x << endl;

    return 0;
}
