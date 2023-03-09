#include<iostream>
using namespace std;
class node {
public:
    int value;
    node* next;
};
void printList(node* n) {
    while (n!=NULL) {
        cout << n->value << endl;
        n = n->next;
    }
}
void AddToFront(node**head,int newValue){

    //create new node
    node* newnode= new node();
    newnode->value=newValue;
    //put in front and connect 1 to 2
    newnode->next=*head;
    //make the first one the head node
    *head=newnode;
}
void addtoend(node**head,int newValue){
    node* newnode=new node();
    newnode->value=newValue;
    newnode->next=NULL;

    if(*head == NULL){
        *head = newnode;
        return;
    }

    node* last =*head;

    while(last->next !=NULL ){
        last =last->next;
    }
    last->next = newnode;
}
void AddAfterPrevious(node*previous,int newValue){
    if(previous==NULL){
        cout<<"previous cant be null";
    }
    node* newnode = new node();
    newnode->value=newValue;

    newnode->next=previous->next;
    previous->next=newnode;
}
int main()
{
    node* head = new node();
    node* second = new node();
    node* third = new node();
    
    head->value=1;
    head->next=second;
    second->value=2;
    second->next=third;
    third->value=3;
    third->next=NULL;
    AddToFront(&head,-1);
    
    addtoend(&head,4);

    AddAfterPrevious(head,11);
    
    printList(head);
}