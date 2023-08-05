#include<bits/stdc++.h>
using namespace std;
int top=-1;
int maxx=6;
int stak[10];
void push(int x)
{
    if(top==maxx-1)
    {
        cout<<"Overflow"<<endl;
    }
    else if(top==-1)
    {
        top=top+1;
        stak[top]=x;
    }
    else
    {
        top++;
        stak[top]=x;
    }
}
void display(int n)
{
    for(int i=top ; i>=0 ; i--)
    {
        cout<<stak[i]<<" ";
    }
}
int main()
{
    int i,n,x;
    cin>>n;
    for(i=0 ; i<n ; i++)
    {
        cin>>x;
        push(x);
    }
    display(n);
}