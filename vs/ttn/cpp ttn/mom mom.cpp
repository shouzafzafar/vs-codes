#include<iostream>
using namespace std;
int main(){
char a[50];
int c=0;
bool flag = true;
gets(a);
for(int i=0;a[i]!='\0';i++)
{
    c++;
}
int j=0;
for(int i=c-1;i>=0;i--)
{
    
    if(a[i]!=a[j]) flag = false;
    j++;
}
if(flag) cout<<"yes"<<endl;
else cout<<"no"<<endl;
}