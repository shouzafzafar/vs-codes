#include<iostream>
using namespace std;
int add(int x,int y)
{
    int c;
    c=x+y;
    return c;
}
int prime(int a)
{
    bool flag=true;
    
    for(int i=2;i<a;i++)
    {
        if(a%i==0)
        {
            flag = false;
            break;
        }
    }
    if(flag) return 1;
    else return 0;
}
void sum_d(int z)
{
int f=1;
    for(int i=1 ; i<=z;i++){
         f=f+i;
    }
    cout<<"not prime sum: "<<f;
}

void pfac(int z)
{
int f=1;
cout<<"pfac: ";
    for(int i=2 ; i<=z;i++){
        int k=prime(i);
        if(z%i==0 && k)
        {
            cout<<i;
            cout<<",";
        }
    }
}



int main(){
int a,b;
cout<<"enter a,b"<<endl;
cin>>a>>b;

int z=add(a,b);
cout<<"add: "<<z<<endl;
int k =prime(z);
if(k) {
    sum_d(z);
}
else {
    pfac(z);
    }
}