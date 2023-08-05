#include<bits/stdc++.h>
using namespace std;
int top=-1;
int max_val=6;
int stk[6];
void push(int val)
{
    if(top==max_val-2)
    {
        cout<<"Overflow";
    }
    else if(top==-1)
    {
        top=0;
        stk[top]=val;
    }
    else
    {
        top++;
        stk[top]=val;
    }
}
void pop()
{
    if(top==-1)
    {
        cout<<"empty stack";
    }
    else
    {
        cout<<"the delete element is : "<<stk[top];
        top--;
    }
    cout<<endl;
}
void display()
{
    for(int i=top ; i>=0 ; i--)
    {
        cout<<stk[i]<<" ";
    }
    cout<<endl;
}
void peek()
{
    cout<<"the top element is : "<<stk[top]<<endl;
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
    display();
    pop();
    pop();
    display();
    peek();
}