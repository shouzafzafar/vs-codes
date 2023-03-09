#include<iostream>
using namespace std;
int main(){
int a,b,f=1;
cin>>a;
cin>>b;
for(int i=2;a!=1 || b!=1;)
{
    if(a%i==0 || b%i==0)
    {
        cout<<i;
        f=f*i;
        
        if(i<a || i<b) cout<<"*";
        if(a%i==0)a=a/i;
        if(b%i==0)b=b/i;

        
    }
    else i++;
    
}
cout<<endl;
cout<<f;
return 0;
}