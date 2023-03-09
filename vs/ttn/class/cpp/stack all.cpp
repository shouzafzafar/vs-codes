//arr stack with norml and switch case(class)
#include <iostream>
using namespace std;

class stack{
	int n;
	int *arr;
	int top;
	public:
    
	stack()
	{
		n=5;
		arr=new int[n];
		top=-1;
	}
	
	stack(int size)
	{
		n=size;
		arr=new int[n];
		top=-1;
	}
	
	void push(int val)
	{
		if(top==n-1)
		{
			cout<<"Overflow";
			return;
		}
		top++;
		arr[top]=val;
	}
	
	void pop()
	{
		if (top==-1)
		{
			cout<<"stack is replay";
			return;
		}
		top--;
	}
	
	int peep()
	{
		return arr[top];
	}
	
	void display()
	{
		for(int i=top;i>=0;i--){
			cout<<arr[i]<<" ";
		}
		cout<<endl;
	}
	
	bool isEmpty()
	{
		if(top==-1){
		cout<<"Empty";
		return true;
		}
		else{
		cout<<"not Empty";
		return false;
		}
	}
	
	bool isFull()
	{
		if(top==n-1){
		cout<<"is full";
		return true;
		}
		else{
		cout<<"is full";
		return false;
		}
	}
};

int main()
{
    int n;
    cout<<"Enter size of stack:";
    cin>>n;
    stack s(n);
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
                s.push(val);
                break;
            case 2:
                s.pop();
                break;
            case 3:
                s.display();
                break;
            case 4:
                s.peep();
                break;
            case 5:
                s.isEmpty();
                break;
            case 6:
                s.isFull();
                break;
            case 7:
                break;

        }
        if(choice==7)
        {
            break;
        }
    }
	
	// stack s(3);
	// s.push(23);
	// s.push(45);
	// s.display();
	
	// s.push(56);
	// s.push(12);
	// s.display();
	
	// s.pop();
	// s.display();
	// cout<<s.peep()<<endl;
	
	return 0;
}