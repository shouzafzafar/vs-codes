#include<iostream>
using namespace std;
int main(){
    double a,b,c,d;
    cout<<"enter a";
    cin>>a;
    cout<<"enter b";
    cin>>b;
    cout<<"enter c";
    cin>>c;
    cout<<"enter d";
    cin>>d;
  //abcd
  if(a>b){
  //acd
    if(a>c){
        //ad
            if(a>d){cout<<"a";}
            else{cout<<"d";}}
     else
        {
        //cd
            if(c>d){cout<<"c";}
            else{cout<<"D";}
        }
  }
  else
  {
 //bcd
    if(b>c)
    {
        //bd
        if(b>d)
        {
            cout<<"b";
    
        }

    else{cout<<"d";}
    }
    else{
        //cd
        if(c>d){cout<<"c";}
        else{cout<<"d";}
    }
  }
return 0;
}