#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int data;
    node *link;
};
class node *top=NULL;
void push()
{
    int x;
    cin>>x;
    node *ptr;
    ptr=new node();
    ptr->data=x;
    ptr->link=NULL;
    if(top==NULL)
    {
        top=ptr;
    }
    else
    {
        ptr->link=top;
        top=ptr;
    }
}
void display()
{
    node *temp;
    temp=top;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->link;
    }
}
int main()
{
    push();
    push();
    push();
    display();
}