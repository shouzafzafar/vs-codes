#include<iostream>
using namespace std;
int main()
{
int n=0,m=0,c=2;
cout<<"enter size: ";
cin>>n;
int arr[n];
for(int i=0;i<=n-1;i++)
{
    cin>>arr[i];
}
for(int i=0;i<=n-3;i++)
{
    
    if(arr[i]==arr[i+2])
    {
        c++;
    }
    else
    {
        if(c>n)
        {
            n=c;

        }
        c=2;

        cout<<n<<"\n";
    }
}
cout<<n;









}