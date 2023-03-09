#include<iostream>
using namespace std;
int main()
{
char a[50];
gets(a);



for(int i=0;a[i]!='\0';i++)
{
    if((a[i]=='('&&a[i+1]==')')||(a[i]=='['&&a[i+1]==']')||(a[i]=='{'&&a[i+1]=='}'))
    {
        for(int j=i;a[j]!='\0';j++)
        {
            
            a[j]=a[j+2];
        }
        i=-1;
    }
    
}
if(a[0]=='\0') cout<<"balance";
else cout<<"no";
// cout<<a;

}