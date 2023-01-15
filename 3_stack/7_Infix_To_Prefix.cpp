#include<iostream>
#include<stack>
#include<algorithm>
#include<string>

using namespace std;
int precedence(char s){
    if (s=='^')
    {
        return 3;
    }
    else if (s=='*' || s=='/')
    {
        return 2;
    }
    else if (s=='+' || s=='-')
    {
        return 1;
    }
    else
    {
        return -1;
    }
    
}
string InfixToPrefix(string s){
    string r,op;
    stack<char> st;
    
    for (int i = s.length()-1; i >= 0; i--)
    {
        r+=s[i];
    }
    for (int i = 0; i < r.length(); i++)
    {
        if (r[i]==')')
        {
            r[i]='(';
        }
        else if (r[i]=='(')
        {
            r[i]=')';
        }
    }
    for (int i = 0; i < r.length(); i++)
    {
        if ((r[i]>='a' && r[i]<='z') || (r[i]>='A' && r[i]<='Z'))
        {
            op=op+r[i];
        }
        else
        {
            if (r[i]=='(')
            {
                st.push(r[i]);
            }
            else if (r[i]==')')
            {
                while (!st.empty() && st.top()!='(')
                {
                op=op+st.top();
                st.pop();
                }
                st.pop();
            }
            else
            {
                while(!st.empty() && precedence(st.top())>precedence(s[i])){
                    op=op+st.top();
                    st.pop();
                }
                st.push(s[i]);
            }
            
        }
    }
        while(!st.empty()){
            op=op+st.top();
            st.pop();
        }
        reverse(op.begin(),op.end());
        return op;
}
int main(int argc, char const *argv[])
{
    cout<<InfixToPrefix("(a-b/c)*(a/k-l)")<<endl;
    cout<<InfixToPrefix("a+b")<<endl;
    return 0;
}
