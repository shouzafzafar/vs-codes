#include<iostream>
using namespace std;
int main(){
int arr[10],d=0,f=0,temp=0,c=0;
// input
for(int i=0;i<=9;i++)
{
    cout<<"enter "<<i+1<<"st student marks: ";
    cin>>arr[i];
    // arr[i]=i;
}

// find index

// for(int i=0;i<=9-c;i++)
// {
//     for(int j=i+1;j<9-c;j++)
//     {
//         if(arr[i] == arr[j])
//         {
//             for(int k=j;k<=9-c;k++)
//             {
//                 arr[k]=arr[k+1];
//                 c++;
//             }
//             j--;
//         }
//     }
// }

for(int i=0;i<=9-c;i++){
    for(int j=i+1;j<=9-c;j++){
        if(arr[i]==arr[j])
        {
            for(int k=j;k<=9-c;k++)
            {
              arr[k]=arr[k+1];
              
            }
            c++;
            j--;
        }
    }
}





for(int i=0;i<=9-c;i++)
{
    cout<<arr[i]<<",";
}
}