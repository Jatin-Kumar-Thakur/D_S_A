// remove duplicate character character from a string
#include <iostream>
#include <string>
using namespace std;

void remove_duplicate(string str)
{
    int nstr[26] = {0};
    for (int i = 0; i < str.length(); i++)
    {
        int x=str[i];
        // cout<<x<<" ";
        nstr[x-97]++;
        // cout<<nstr[x-97]++<< " ";

        
    }
    for (int i = 0; i < 26; i++)
    {
        if (nstr[i]>0)
        {
            cout<<nstr[i]<<" ";
        }
        
    }
    cout<<endl;
    for (int i = 0; i < str.length(); i++)
    {
        int x=str[i];
        if (nstr[x-97]>0)
        {
            cout<<str[i]<<" ";
            nstr[x-97]=0;
        }
        
    }
    
    
    // return str;
}
int main(int argc, char const *argv[])
{
    string str;
    cout << "Enter String : ";
    cin >> str;
    cout << "String is : " << str << endl;
    remove_duplicate(str);
    return 0;
}
