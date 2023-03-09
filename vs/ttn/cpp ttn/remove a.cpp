#include<iostream>
using namespace std;
int main(){
char a[50];
int c=0;
int arr[5];
gets(a);
for(int i=0;a[i]!='\0';i++)
{
    if(a[i]=='a') 
    {
        for(int j=i;a[j]!='\0';j++)
        {
            a[j]=a[j+1];
            
        }
        i--;
    }
}
cout<<a;

}