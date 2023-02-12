#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int max_ocr(string s)
{
    sort(s.begin(), s.end());
    int max = 0;
    int count;
    for (int i = 0; i < s.length(); i=i+count)
    {
        count = 0;
        char c = s[i];
        int j=i;
        while (s[j] == c)
        {
            j++;
            count++;
        }
        if (max < count)
        {
            max = count;
        }
    }
    return max;
}
int main(int argc, char const *argv[])
{
    string s;
    cout << "Enter s : ";
    cin >> s;
    int m=max_ocr(s);
    cout<<"Max frequency : "<<m<<endl;
    return 0;
}
