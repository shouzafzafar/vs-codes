#include<iostream>
using namespace std;
int main()
{
    int n,flag=1;
    cin>>n;
    for(int i=2;i<n-1;i++)
    {
        if(n%i==0){
            flag=0;
            break;
        }
    }
    if(flag==1)
    {
        cout<<"is prime";
    }
    else cout<<"not prime";

}
    
    
