#include<bits/stdc++.h>
using namespace std;
class stak
{
    public:
    int data;
    stak *link;
};
class stak *top=NULL;
void push_in_stak(int x)
{
    class stak *ptr; //stak *ptr;
    ptr=new stak();
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

void pop_stak()
{
    class stak *temp;
    temp=top;
    top=top->link;
    delete temp;
}

void display_stak()
{
    class stak *temp; //stak *temp;
    temp=top;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->link;
    }
    cout<<endl;
}
int main()
{
    int i,n,x;
    cin>>n;
    for(i=0 ; i<n ; i++)
    {
        cin>>x;
        push_in_stak(x);
    }
    display_stak();
    cout<<"After pop : "<<endl;
    pop_stak();
    display_stak();
}