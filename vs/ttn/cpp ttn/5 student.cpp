#include<iostream>
using namespace std;
class student
{
    public:
        char name[50];
        int rollno,eng,pun,hindi;
        int sum;
        
};
int main(){
    student a[5];
    int max=0,mno;
    for(int i=0;i<=4;i++)
    {
        cout<<"enter name"<<endl;
        fflush(stdin);
        gets(a[i].name);
        cout<<"enter rollno"<<endl;
        cin>>a[i].rollno;
        cout<<"enter english mark"<<endl;
        cin>>a[i].eng;
        cout<<"enter punjabi mark"<<endl;
        cin>>a[i].pun;
        cout<<"enter hindi mark"<<endl;
        cin>>a[i].hindi;
    }
    for(int i=0;i<=4;i++)
    {
        cout<<"name: ";
        cout<<a[i].name<<endl;
        cout<<"rollno: ";
        cout<<a[i].rollno<<endl;
        cout<<"eng: ";
        cout<<a[i].eng<<endl;
        cout<<"pun: ";
        cout<<a[i].pun<<endl;
        cout<<"hindi: ";
        cout<<a[i].hindi<<endl;
        cout<<"sum: ";
        a[i].sum=a[i].eng+a[i].pun+a[i].hindi;
        cout<<a[i].sum<<endl;
    }
    for(int i=0;i<=4;i++)
    {
        if(a[i].sum>max)
        {
            max=a[i].sum;
            mno=i;
        }
    }
    cout<<"max is: ";
    cout<<max<<endl;
    cout<<"of: "<<a[mno].name;
    
}