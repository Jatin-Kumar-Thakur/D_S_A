#include<iostream>
#include<string>
#include<stack>

using namespace std;

int postFixExp(string exp){
    stack<int> st;
    for (int i = 0; i < exp.length(); i++)
    {
        if (exp[i]>='0' && exp[i]<='9')
        {
            st.push(exp[i]-'0');
        }
        else
        {
            // operand case is opposite as comparative to prefix exp
            // first top value is assign to operand 2 and seconf is to operand 1
            int op2=st.top();
            st.pop();
            int op1=st.top();
            st.pop();
            switch (exp[i])
            {
            case '+':
                st.push(op1+op2);
                break;
            case '-':
                st.push(op1-op2);
                break;
            case '*':
                st.push(op1*op2);
                break;
            case '/':
                st.push(op1/op2);
                break;
            
            default:
                break;
            }
        }
        
    }
    return st.top();
}
int main(int argc, char const *argv[])
{
    cout<<postFixExp("46+2/5*7+");
    return 0;
}
