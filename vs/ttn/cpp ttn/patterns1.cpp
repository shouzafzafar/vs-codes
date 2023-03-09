#include<iostream>
using namespace std;
int main()
{
    // int s,e;
    // cout<<"enter start";
    // cin>>s;
    // cout<<"enter end";
    // cin>>e;
    int d=1,c=1;
    for(int i=1;i<=5;i++)
    {
        for(int k=1;k<=c;k++)
        {
            cout<<" ";
        }
        for(int j=5;j>=i;j--)
        {   
            cout<<j;  
        }
        c=c+1;
        for(int a=i+1;a<=5;a++){
            cout<<a;
        }
        cout<<endl;
    }
}
           