#include<iostream>
#include<stack>
#include<math.h>

using namespace std;

int prefixExp(string exp){
    stack<int> s;
    for (int i = exp.length()-1; i>=0; i--)
    {
        if (exp[i]>='0' && exp[i]<='9')
        {
            s.push(exp[i]-'0');
        }
        else{
            int op1=s.top();
            s.pop();
            int op2=s.top();
            s.pop();
            switch (exp[i])
            {
            case '+':
                s.push(op1+op2);
                break;
            case '-':
                s.push(op1-op2);
                break;
            case '*':
                s.push(op1*op2);
                break;
            case '/':
                s.push(op1/op2);
                break;
            
            default:
                break;
            }
        }
    }
    return s.top();
}
int main(int argc, char const *argv[])
{
    // string s;
    // cout<<"Enter Expression : ";
    // cin>>s;
    cout<< prefixExp("-+7*45+20");
    return 0;
}
