//ccll insert beg,end(class)
#include<iostream>
using namespace std;
class node {
public:
    int data;
    node* next;
};
node*insert_beg(node*last,int data)
{
    node*temp;
    temp = new node();
    temp -> data = data;
    if(last==NULL)
    {
        temp -> next = temp;
        last = temp;
    }
    else
    {
        temp -> next = last -> next;
        last -> next = temp;
    }
    return last;
}
node*insert_end(node*last,int data)
{
    node*temp;
    temp = new node();
    temp -> data = data;
    if(last==NULL)
    {
        temp -> next = temp;
        last=temp;
    }
    else
    {
        temp -> next = last -> next;
        last -> next = temp;
        last=temp;
    }
    return last;
}
node*del_beg(node*last)
{
    node*temp;
    temp=last->next;
    last->next=temp->next;
    free(temp);
    return last;
}

node*del_end(node*last)
{
    node *SecondLast;
    SecondLast = last -> next;

    while(SecondLast -> next!=last)  
    {
      SecondLast = SecondLast -> next;
      SecondLast ->next = last -> next;
      node*temp = last;
      free(temp);
      last=SecondLast;
      return last;

    }
}
void display(node*last)
{
    node*temp=last;
    temp=temp->next;
    while(temp!=last)
    {
        cout<<temp->data<<" "<<temp->next<<endl;
        temp=temp->next;
    }
    cout<<temp->data;
}
int main()
{
    node *last = NULL;
    // for(int i=1;i<10;i+=2)
    // {
    //     last = insert_end(last,i);
    // }
    insert_end(last,2);
    insert_end(last,3);
    insert_end(last,4);
    //del_beg(last);
    del_end(last);
    display(last);
}