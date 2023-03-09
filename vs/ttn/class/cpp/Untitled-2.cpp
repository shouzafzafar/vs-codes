#include<iostream>
#include<malloc.h>
using namespace std;
typedef struct linklist
{
    int data;
    struct linklist *next;
}node;

node * insert_end(node *start,int val)
{
    node *temp;
    temp=new node;
    temp->data=val;
    temp->next=NULL;

    if(start==NULL)
    {
        start=temp;
    }
    else
    {
        node *last=start;
        while(last->next!=NULL)
        {
            last=last->next;
        }
        last->next=temp;
    }
    return start;
    
    
}
void display(node *start)
{
    node *p=start;
    while(p!=NULL)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
}
int main()
{
    node *start;
    start=NULL;
    start=insert_end(start,5);
    start=insert_end(start,10);
    start=insert_end(start,15);
    display(start);

    start=insert_end(start,45);
    start=insert_end(start,43);
    display(start);
    return 0;
}