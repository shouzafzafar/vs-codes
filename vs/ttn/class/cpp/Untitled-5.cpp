#include<iostream>
using namespace std;
int stringToInteger(string x){
	int temp = 0;
	for(int i = 0; i<x.length(); i++){
		
        temp = temp * 10 + (x[i] - '0');
	}
	return temp;
};

int main(){
cout << stringToInteger("53");
int a = 0;
a = '5'-'0';

cout << typeid(a).name() ;
	
};