#include<bits/stdc++.h>
using namespace std;
//#define n 5
int stackk[5];
int top=-1;
void push()
{
    int x;
    cin>>x;
    top++;
    stackk[top]=x;
}
void pop()
{
    int item;
    item=stackk[top];
    top--;
    cout<<item<<endl;
}
void peek()
{
    cout<<stackk[top]<<endl;
}
void display()
{
    for(int i=top ; i>=0 ; i--)
    {
        cout<<stackk[top]<<" ";
        top--;
    }
}
int main()
{
    push();
    push();
    push();
    push();
    push();
    display();
}