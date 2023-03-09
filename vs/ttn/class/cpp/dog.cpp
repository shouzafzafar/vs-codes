// #include<iostream>
// using namespace std;
// int main(){
// int a=0,b=1,sum=0,n=6;
// for(int i=0;i<n;i++){
//     cout<<a<<" ";
//     sum=a+b;
//     a=b;
//     b=sum;
// }
// cout<<sum;
// return 0;
// }


#include<iostream>
using namespace std;
int main(){
    int n=7;
   
for(int i=0;i<n;i++){
    
    for(int j=0;j<n;j++)
    {
        if(i==j || i + j == n - 1){
        cout<<"*";}
        else
            cout<<" ";
    }
    cout<<endl;
}
return 0;
}