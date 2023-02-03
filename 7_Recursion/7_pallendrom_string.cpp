// sum of n numbers
#include <iostream>
using namespace std;

string check(string s,int i){

    if (i>=s.length()/2)
    {
        return "yes";
    }
    if (s[i]!=s[s.size()-i-1])
    {
        return "false";
    }
    return check(s,i+1);
    
    
}
int main(int argc, char const *argv[])
{
    string s="abbb";
    string res=check(s,0);
    cout<<res;
    return 0;
}
