#include<bits/stdc++.h>
#include<stack>
using namespace std;
int bal(string str)
{
    int i;
    stack<char> s;
    for(i=0 ; i<str.length() ; i++)
    {
        if(str[i]=='(' || str[i]=='{' || str[i]=='[')
        {
            s.push(str[i]);
        }
    }
    for(i=0 ; i<str.length() ; i++)
    {
        switch(str[i])
        {
            case ')':
            {
                s.pop();
                break;
            }
            case '}':
            {
                s.pop();
                break;
            }
            case ']':
            {
                s.pop();
                break;
            }
        }
    }
    return s.empty();
}
int main()
{
    string s;
    cin>>s;
    if(bal(s))
    {
        cout<<"Blanced"<<endl;
    }
    else
    {
        cout<<"Not blanced"<<endl;
    }
}