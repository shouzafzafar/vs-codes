#include<iostream>
using namespace std;
int main()
{
    char a[50];//ccaaffddecee  ccaadc

    int c,arr[27],temp;
    gets(a);
    int k=0;
    for(char j='a';j<='z';j++)
    {
        c=0;
        for(int i=0 ; a[i]!='\0';i++)
        {
            if(a[i]==j)
            {
                c++;      
            }
        }
        if(c>0){ arr[k]=c;
k++;
        }
    }
    for(int i=0;i<k-1;i++)
    {
        for(int j=i;j<k-1;j++)
        {
            if(arr[i]<arr[i+1])
            {
                temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
    }
    c=0;
    for(int i=1;i<k;i++)
    {
        while(arr[i]>=arr[i-1]&&arr[i]>0)
        {
            arr[i]--;
            c++;
        }
    }
    cout<<c;


}