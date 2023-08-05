#include<bits/stdc++.h>
using namespace std;
int top=-1;
char stak[100];

void push_in_stak(char ch)
{
    if(top==-1)
    {
        top=top+1;
        stak[top]=ch;
    }
    else
    {
        top++;
        stak[top]=ch;
    }
}

void pop_stak()
{
    top--;
}

int priority(char ch)
{
    if(ch=='^')
    {
        return 3;
    }
    else if(ch=='*' || ch=='/')
    {
        return 2;
    }
    else if(ch=='+' || ch=='-')
    {
        return 1;
    }
    else 
    {
        return 0;
    }
}

string inTOpost(string str)
{
    string post="";
    stak[top]='#';
    for(int i=0 ; i<str.length() ; i++)
    {
        if(str[i]>='a' && str[i]<='z')
        {
            post+=str[i];
        }
   
        else if(str[i]=='^')
        {
            push_in_stak(str[i]);
        }
        else if(str[i]=='(')
        {
            push_in_stak(str[i]);
        }
        else if(str[i]==')')
        {
            while(stak[top]!='(')
            {
                char ch=stak[top];
                post+=ch;
                pop_stak();
            }
            pop_stak();
        }
        else
        {
            if(priority(str[i])>priority(stak[top]))
            {
                push_in_stak(str[i]);
            }
            else
            {
                while(priority(str[i])<=priority(stak[top]))
                {
                    char ch=stak[top];
                    post+=ch;
                    pop_stak();
                }
            }
        }
        while(stak[top]!='#')
        {
            char ch=stak[top];
            post+=ch;
            pop_stak();
        }

    }
    return post;
}
int main()
{
    string s;
    cin>>s;
    cout<<"Post fix of the string is : "<<inTOpost(s)<<endl;
}