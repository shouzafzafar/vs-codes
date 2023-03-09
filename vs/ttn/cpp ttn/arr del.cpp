#include<iostream>
using namespace std;
int main(){
int arr[10],d=0,f=0,temp=0,c;
// input
for(int i=0;i<=9;i++)
{
    cout<<"enter "<<i+1<<"st student marks: ";
    cin>>arr[i];
    // arr[i]=i;
}
cout<<"enter bo to del"<<endl;
cin>>d;
// find index




for(int i=0;i<=9-c;i++)
{
    // cout<<"I"<<i<<endl;
    if(d==arr[i]){
        f=i;
        c++;
        for(int j=f;j<=9-c;j++)
        {
            arr[j]=arr[j+1];
        }
        i--;
    }
}









for(int i=0;i<=9-c;i++)
{
    cout<<arr[i]<<",";
}
}