#include<iostream>
using namespace std;
int main(){
int arr[11],k=0,m=0,temp=0;
// input
for(int i=0;i<=9;i++)
{
    cout<<"enter "<<i+1<<"st student marks: ";
    cin>>arr[i];
    // arr[i]=i;
}
cout<<"enter index: ";
cin>>k;
k--;
cout<<"enter marks: ";
cin>>m;


    
for(int i=k;i<=10;i++){
    temp=arr[i];
    arr[i]=m;
    m=temp;
    
}













for(int i=0;i<=9+1;i++)
{
    cout<<arr[i]<<",";
}
}