#include<iostream>
using namespace std;
int main(){
int n=12;
for(int i=2;i<=n;)
{
    if(n%i==0){
        cout<<i;
        n=n/i;
    }
    else i++;
}
return 0;
}