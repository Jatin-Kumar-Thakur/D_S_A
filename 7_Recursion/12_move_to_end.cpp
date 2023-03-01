#include <iostream>
#include <string>
using namespace std;

void swap(char &c, char &d)
{
    char temp = c;
    c = d;
    d = temp;
}
void toend(string s, string ns, int i, int count)
{
    if (i == s.length())
    {
        while (count > 0)
        {
            ns = ns + 'x';
            count--;
        }
        cout << ns;
        return;
    }
    if (s[i] == 'x')
    {
        count++;
    }
    else
    {
        ns = ns + s[i];
    }
    toend(s, ns, i + 1, count);
}
int main(int argc, char const *argv[])
{
    string str;
    cout << "Enter string : ";
    cin >> str;

    int len = str.length();
    string ns = "";
    toend(str, ns, 0, 0);
    return 0;
}
