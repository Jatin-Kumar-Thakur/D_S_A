#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

string touppercase(string s1){
    for (int i = 0; i < s1.length(); i++)
    {
        
        if (s1[i]>=97 && s1[i]<=122)
        {
            s1[i]=s1[i]-32;
        }
        
        
    }
    return s1;
}
string tolowercase(string s){
    for (int i = 0; i < s.length(); i++)
    {
        
        if (s[i]>=65 && s[i]<=90)
        {
            s[i]=s[i]+32;
        }
        
        
    }
    return s;
}
int main(int argc, char const *argv[])
{
    string s1,s2;
    cout<<"Enter s1 An d s2 : ";
    cin>>s1>>s2;
    cout<<"Original String : "<<s1<<" And " <<s2<<endl;
    
    string upper=touppercase(s1);
    string lower=tolowercase(s2);
    cout<<"Upper Final string : "<<upper<<endl;
    cout<<"Lower Final string : "<<lower<<endl;

    // using inbuild function which present in header algorithm
    string str;
    cout<<endl<<"Enter Str : ";
    cin>>str;
    transform(str.begin(),str.end(),str.begin(),::toupper);
    // transform(str.begin(),str.end(),str.begin(),::tolower);
    cout<<"To Upper using Function : "<<str<<endl;

    return 0;
}
