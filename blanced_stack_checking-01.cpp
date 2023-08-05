#include<bits/stdc++.h>
#include<stack>
using namespace std;

/*
char stak[100];
int top=-1;

char push_(char ch)
{
    top++;
    stak[top]=ch;
}

char pop_()
{
    stak[top--];
}
*/

int check(string s)
{
    stack<char>str;
    for(int i=0 ; i<s.length() ; i++)
    {
        if(s[i]=='(' || s[i]=='{' || s[i]=='[')
        {
            str.push(s[i]);
        }
    }
    for(int i=0 ; i<s.length() ; i++)
    {
       
            switch (s[i])
            {
            case ')':
            {
                str.pop();
                break;
            }
            
            case '}':
            {
                str.pop();
                break;
            }
            case ']':
            {
                str.pop();
                break;
            }
            }
        
    }
    return (s.empty());
}

int main()
{
    string s;
    cin>>s;
    if(check(s))
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }
}
