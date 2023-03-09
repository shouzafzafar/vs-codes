//anagram
#include<iostream>
using namespace std;
int main(){
char a[50],b[50];
int c1=0,c2=0,j=0;
gets(a);
gets(b);
bool flag = true;


for(char j='a';j<='z';j++){
    c1=0;
    c2=0;
    
    for(int i=0;a[i]!='\0';i++){
        if(a[i]==j) c1++;
        
    }

    for(int k=0;b[k]!='\0';k++){
        if(b[k]==j) c2++;
        
    }

    if(c1!=c2) 
    {
        flag=false;
        cout<<"no";
        break;
    }
    
}

if(flag) cout<<"yes";







}