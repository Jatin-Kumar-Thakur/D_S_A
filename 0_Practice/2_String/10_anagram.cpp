#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

void anagram(string s1, string s2)
{
    if (s1.length() != s2.length())
    {
        cout << "False bcz length is different" << endl;
    }
    else
    {
        if (s1 == s2)
        {
            cout << "False bcz order is same" << endl;
        }
        else
        {
            int arr1[26] = {0};
            int arr2[26] = {0};
            for (int i = 0; i < s1.length(); i++)
            {
                arr1[s1[i] - 'a']++;
                arr2[s2[i] - 'a']++;
            }
            for (int i = 0; i < 26; i++)
            {
                if (arr1[i] != arr2[i])
                {
                    cout << "False" << endl;
                    return;
                }
            }
            cout << "True" << endl;
        }
    }
}
void method2(string s1, string s2)
{
    if (s1.length() != s2.length())
    {
        cout << "False bcz length is different" << endl;
    }
    else
    {
        if (s1 == s2)
        {
            cout << "False bcz order is same" << endl;
        }
        else
        {
            vector<char> v1;
            vector<char> v2;
            for (int i = 0; i < s1.length(); i++)
            {
                v1.push_back(s1[i]);
                v2.push_back(s2[i]);
            }
            sort(v1.begin(), v1.end());
            sort(v2.begin(), v2.end());
            // cout << v1.size();
            for (int i = 0; i < v1.size(); i++)
            {
                if (v1[i] != v2[i])
                {
                    cout << "False" << endl;
                    return;
                }
            }
            cout << "True" << endl;
        }
    }
}
int main(int argc, char const *argv[])
{
    string s1, s2;
    cout << "Enter string s1 and s2 : ";
    cin >> s1 >> s2;
    cout << "S1 : " << s1 << endl
         << "S2 : " << s2 << endl;
    // anagram(s1, s2);
    method2(s1, s2);
    return 0;
}
