#include<iostream>
using namespace std;
int main(){
char a[50];
gets(a);
for(int i=0;a[i]!='\0';i++)
{
    if(a[i]>='a' && a[i]<='z')
        {
            a[i]-=32;
            cout<<a[i];
        }
        
    else if(a[i]>='A' && a[i]<='Z')
        a[i]+=32;
}
cout<<a;

}