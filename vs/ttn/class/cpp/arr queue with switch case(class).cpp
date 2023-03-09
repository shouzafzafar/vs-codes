//arr queue with switch case(class)
#include <iostream>
using namespace std;

class queue{
	int n;
	int *arr;
	int F,R;
	public:
    
	queue()
	{
		n=5;
		arr=new int[n];
		F=-1;
        R=-1;
	}
	
	queue(int size)
	{
		n=size;
		arr=new int[n];
		F=-1;
        R=-1;
	}
	
	void insert(int val)
	{
		if(R==n-1)
		{
			cout<<"Queue Overflow";
			return;
		}
		else if(F==-1)
        {
            F=0;
            R=0;
        }
        else
        {
            R++;
        }
        arr[R]=val;
	}
	
	void deletion()
	{
		if (F==-1)
		{
			cout<<"stack is replay";
			return;
		}
		else if(F==R)
        {
            F=-1;
            R=-1;
        }
        else
        {
            F++;
        }
	}
	
	int peep()
	{
		return arr[R];
	}
	
	void display() 
	{
		if(F==-1)
        {
            cout<<"Queue is empty\n";
            return;
        }
        for(int i=F;i<=R;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
	}
	
	bool isEmpty()
	{
		if(R==-1){
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
		if(R==n-1){
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
    cout<<"Enter size of queue:";
    cin>>n;
    queue s(n);
    int choice;

    while(1)
    {
        cout<<"1 for insert\n";
        cout<<"2 for delete\n";
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
                s.insert(val);
                break;
            case 2:
                s.deletion();
                break;
            case 3:
                s.display();
                break;
            case 4:
                break;

        }
        if(choice==4)
        {
            break;
        }
    }
	

	return 0;
}