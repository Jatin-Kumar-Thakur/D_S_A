#include<iostream>
#include<stack>

using namespace std;
int main(int argc, char const *argv[])
{
    stack<int> s;
    stack<int> s2;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    int size=s.size();
    cout<<size<<endl;

    if (size%2==0)
    {
        int temp=size/2;
        while(temp>0){
        s2.push(s.top());
        s.pop();
        temp--;
        }
        s2.pop();

    }
    else
    {
        int temp=size/2;
        while (temp>0)
        {
            s2.push(s.top());
            s.pop();
            temp--;
        }
        s.pop();
    }
        while(!s2.empty()){
            // cout<<s2.top()<<endl;
            s.push(s2.top());
            s2.pop();
        }
    while (!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    
    return 0;
}
