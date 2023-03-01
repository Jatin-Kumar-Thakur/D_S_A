#include <iostream>
#include <string>
using namespace std;
void occurence(string str, char key, int f, int l, int len, int i)
{
    if (i == len)
    {
        cout << "First : " << f << endl
             << "Last : " << l << endl;
        return;
    }
    if (str[i] == key && f == -1)
    {
        f = i;
    }
    else if (str[i] == key)
    {
        l = i;
    }
    occurence(str, key, f, l, len, i+1);
}
int main(int argc, char const *argv[])
{
    string str;
    cout << "Enter String : ";
    cin >> str;

    int last = -1, first = -1;
    int len = str.length();
    char c;
    cout << "Enter key to find : ";
    cin >> c;
    occurence(str, c, first, last, len, 0);
    return 0;
}
