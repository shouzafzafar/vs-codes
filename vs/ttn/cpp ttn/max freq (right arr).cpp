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
    c=2;
   while(arr[i]==arr[i+2]&&i<=n-3)
   {
c++;
i++;
   }
   if(c>m)
   m=c;

}
cout<<m;









}