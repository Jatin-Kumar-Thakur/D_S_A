//from a max number using a numeric string
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main(int argc, char const *argv[])
{
    string s,str;
    cout<<"Enter Numeric String s and str : ";
    cin>>s>>str;
    for (int i = 0; i < str.length(); i++)
    {
        for (int j = i; j < str.length(); j++)
        {
            if (str[i]<str[i+1])
            {
                swap(str[i],str[i+1]);
            }
            
        }
        
    }
    cout<<"Big : "<<str<<endl;

    //using function
    sort(s.begin(),s.end());
    reverse(s.begin(),s.end());

    cout<<"Biggest Number : "<<s<<endl;
    return 0;
}
