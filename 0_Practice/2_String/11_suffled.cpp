// WAP to check weather  a string is valid suggled of two string or not
// s1=hlo  s2= sir  res=hlsoir
#include <iostream>
#include <string>

using namespace std;

void check_suffle(string s1, string s2, string res)
{
    int l1 = s1.length();
    int l2 = s2.length();
    int lr = res.length();
    if (lr != (l1 + l2))
    {
        cout << "Not " << endl;
    }
    else
    {
        int i = 0, j = 0, k = 0, count = 0;
        while (k < lr)
        {
            if (s1[i] == res[k])
            {
                k++;
                i++;
            }
            else if (s2[j] == res[k])
            {
                j++;
                k++;
            }
            else
            {
                count++;
                k++;
            }
        }
        if (count > 0)
        {
            cout << "Not" << endl;
        }
        else
        {
            cout << "Yes" << endl;
        }
    }
}
int main(int argc, char const *argv[])
{
    string s1, s2, res;
    cout << "Enter string s1 and s2 : ";
    cin >> s1 >> s2;
    cout << "Enter resultant string : ";
    cin >> res;
    check_suffle(s1, s2, res);
    return 0;
}
