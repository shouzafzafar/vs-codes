#include<iostream>
using namespace std;
int main(){
int arr[10],max=0,smax=0,tmax=0;
for(int i=0;i<=9;i++)
{
    cout<<"enter "<<i+1<<"st student marks: ";
    cin>>arr[i];
}
max=arr[0];
for(int i=0;i<=9;i++)
{
    
    if(arr[i]>max) {
        tmax=smax;
        smax=max;
        max=arr[i];
    }
    else if(arr[i]>smax) {
        tmax=smax;
        smax=arr[i];
        }
    else if(arr[i]>tmax) tmax=arr[i];
    
}
cout<<max<<endl;
cout<<smax<<endl;
cout<<tmax;
}