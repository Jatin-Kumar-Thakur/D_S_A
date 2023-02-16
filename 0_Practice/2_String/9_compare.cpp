#include <iostream>
#include <string>
using namespace std;

bool compare_str(string s1, string s2)
{
    if (s1.length() != s2.length())
    {
        return 0;
    }
    else
    {
        for (int i = 0; i < s1.length(); i++)
        {
            if (s1[i] != s2[i])
            {
                return 0;
            }
        }
    }
    return 1;
}
int main(int argc, char const *argv[])
{
    string s1, s2;
    cout << "Enter string s1 and s2 : ";
    cin >> s1 >> s2;
    bool res = compare_str(s1, s2);
    if (res == 0)
    {
        cout << "Result : False" << endl;
    }
    else
    {
        cout << "Result : True" << endl;
    }

    return 0;
}
