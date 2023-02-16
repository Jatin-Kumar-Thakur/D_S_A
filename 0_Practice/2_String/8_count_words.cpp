#include <iostream>
#include <string>
using namespace std;

int countWords(string s)
{
    int count = 0;
    if (s.length() == 0)
    {
        return count;
    }
    else
    {
        count = 1;
        for (int i = 0; i < s.length(); i++)
        {
            // int j = i;
            if (s[i] == 32)
            {
                count++;
            }
        }
        return count;
    }
}
int main(int argc, char const *argv[])
{
    string s;
    cout << "Enter string : ";
    getline(cin, s);
    cout << "String : " << s << endl;
    int count = countWords(s);
    cout << "Count : " << count << endl;
    return 0;
}
