#include<iostream>
#include<malloc.h>
using namespace std;
typedef struct linklist
{
    int data;
    struct linklist *next;
}node;

node * insert_beg(node *start,int val)
{
    node *temp;
    temp=(node *)malloc(sizeof(node));

    temp->data=val;
    temp->next=NULL;

    if(start==NULL)
    {
        start=temp;
    }
    else
    {
        temp->next=start;
        start=temp;
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
    start=insert_beg(start,5);
    start=insert_beg(start,10);
    start=insert_beg(start,15);
    display(start);
    return 0;


}