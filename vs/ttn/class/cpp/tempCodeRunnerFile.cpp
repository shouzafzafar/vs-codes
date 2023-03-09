#include<iostream>
using namespace std;
int main(){
char a[50],k;
int temp,i=0,j;
gets(a);

k=a[i];
for(i=1;a[i]!='\0';i++)
{

    if(a[i]!=' ')
    { 
        a[i-1]=a[i];
        
    }
    else {
        a[i-1]=k;
        i=i+1;
        k=a[i];
        
    }
}
a[i-1]=k;
cout<<a;
}