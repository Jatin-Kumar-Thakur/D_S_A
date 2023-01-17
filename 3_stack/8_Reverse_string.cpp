#include<iostream>
#include<stack>
#include<string>

using namespace std;
string Rerverse_String(string s){
    stack<char> st;
    string reverse;
    for (int i = 0; i < s.length(); i++)
    {
        st.push(s[i]);
    }
    while(!st.empty())
    {
        reverse+=st.top();
        st.pop();
    }

    return reverse;
    
}

int main(int argc, char const *argv[])
{
    cout<<Rerverse_String("jatin")<<endl;
    cout<<Rerverse_String("jatin kumar");
    return 0;
}
