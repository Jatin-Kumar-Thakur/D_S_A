#include<iostream>
#include<string>
#include<math.h>
#include<stack>

using namespace std;

int checkPrece(char s){
   if (s=='^')
   {
    return 3;
   }
   else if (s=='*' || s=='/')
   {
    return 2;
   }
   else if(s=='+' || s=='-')
   {
    return 1;
   }
   else {
    return -1;
   }
}
void prefixTopostfix(string s){
    stack<char> st;
    string op;
    for (int i = 0; i < s.length(); i++)
    {
        if ((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z'))
        {
            op+=s[i]; 
        }
        else
        {
            if (s[i]=='(')
            {
                st.push(s[i]);
            }
            else if (s[i]==')')
            {
                while(!st.empty() && st.top()!='('){
                    op=op+st.top();
                    st.pop();
                }
                    st.pop();
                
            }
            else
            {
                 while(!st.empty() && checkPrece(s[i])<checkPrece(st.top())){
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
        cout<<op;
}
int main(int argc, char const *argv[])
{
    prefixTopostfix("(a-b/c)*(a/k-l)");
    
    return 0;
}
