//ll stack
#include<iostream>
using namespace std;
struct node
{
    public: 
    int data;
    struct node *next;
};
node * push(node * top,int newval )
{
    //create new node
    node *temp=new node;
    temp->data=val;
    //put in front and connect 1 to 2
    temp->next=top;
    //make the first one the head node
    top=temp;
    return top;

}
node * pop(node *top)
{
    node *temp;
    if(top==NULL)
    {
        cout<<"Stack is empty\n";
        return NULL;
    }
    temp=top;

    top=top->next;
    delete temp;
    return top;
}
void display(node *top)
{
    node*temp;
    if(top==NULL)
    {
        cout<<"Stck is empty";
        return;
    }
    temp=top;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int peep(node *top)
{
    return top->data;
}
int main()
{
    node *top;
    top=NULL;

    int choice;

     while(1)
    {
        cout<<"1 for push\n";
        cout<<"2 for pop\n";
        cout<<"3 for display\n";
        cout<<"4 for peep\n";
        cout<<"5 for isemplty\n";
        cout<<"6 for isfull\n";
        cout<<"7 for exit\n";

        cin>>choice;
        switch(choice)
        {
            case 1:
                int val;
                cout<<"Enter value:";
                cin>>val;
                top=push(top,val);
                break;
            case 2:
                top=pop(top);
                break;
            case 3:
                display(top);
                break;
            case 4:
                int m;
                m=peep(top);
                cout<<m<<endl;
                break;
            // case 5:
            //     s.isEmpty();
            //     break;
            // case 6:
            //     s.isFull();

                // break;
            
        }
        if(choice==5)
        {
            break;
        }
    }
}