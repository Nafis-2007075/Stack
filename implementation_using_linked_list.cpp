#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int data;
    node *link;
};
class node *top=NULL;
push(int x)
{
    node *newnode;
    newnode=new node();
    newnode->data=x;
    newnode->link=top;
    top=newnode;
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
    cout<<endl;
}
void peek()
{
    cout<<top->data;
}
void pop()
{
    node *temp;
    temp=top;
    cout<<temp->data<<endl;
    top=temp->link;
    delete temp;
}
int main()
{
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    display();
    pop();
    display();
}