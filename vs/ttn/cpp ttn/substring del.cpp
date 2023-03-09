#include <iostream>
using namespace std;
int main()
{
    char a[50];
    char b[50];
    cout<<"enter string"<<endl;//this is a string for abs
    gets(a);
    cout<<"enter string to del"<<endl;//a string
    gets(b);
    int c=0;
    for(int i=0;b[i]!='\0';i++)
    {
       c++; 
    } 

for(int i=0;a[i]!='\0';i++){
   if(a[i]==b[0])
   {
    int d=0;
    for(int j=0;b[j]!='\0';j++)
    {
        if(a[i+j]!=b[j])
        {
            d=1;
        }
    }
    if(d==0)
    {
       
        for(int j=i;a[j]!='\0';j++)
        {
            a[j]=a[j+c];
        }
    }
   }
}
cout<<a;
}
