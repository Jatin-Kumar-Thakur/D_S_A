#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void check(string s)
{
    int count = 0;
    string x = s;
    reverse(x.begin(), x.end());
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != x[i])
        {
            count++;
            break;
        }
    }
    if (count > 0)
    {
        cout << "Not palindromwe" << endl;
    }
    else
    {
        cout << "Palindrome" << endl;
    }
}
int main(int argc, char const *argv[])
{
    string s;
    cout << "Enter string s : ";
    cin >> s;
    check(s);
    return 0;
}
