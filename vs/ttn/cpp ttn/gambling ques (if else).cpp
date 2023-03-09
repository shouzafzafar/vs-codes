#include<iostream>
using namespace std;
int main()
{
    int n,k,i;
    cin>>n;
    cin>>k;
    for(i = 0 ; n>1;i++)
    {
        if(k>0 && n%2==0)
        {
            n=n/2;
            k=k-1;
        }
        else n=n-1;
    }
    cout<<i;
}