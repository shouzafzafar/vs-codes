#include<iostream>
using namespace std;
int main()
{
    char a[50];
    int v=0,s=0,c=0;
    gets(a);
    // cout<<a<<endl;
    for(int i=0; a[i]!='\0';i++)
    {
        if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u') v++;
        if(a[i]==' ') s++;
        if(a[i]>='a'&& a[i]<='z') c++;
    }
    cout<<"vovels: "<<v<<endl;
    cout<<"spaces: "<<s<<endl;
    cout<<"consonants: "<<c-v;

}