#include<iostream>
using namespace std;

//signiture
	int mult_rec(int,int);

//main
	int main(void){
		int a,b,result;
		
		cout<<"please Enter Number 1 : ";
		cin>>a;
		cout<<"Please Enter Number 2 : ";
		cin>>b;
		
		result=mult_rec(a,b);
		cout<<a<<" * "<<b<<" = "<<result;
		
		return 0;
	}
	
//fucntion
//a=2 b=3

	int mult_rec(int a,int b){
		if(b == 0){
			return 0;
		}
		return a + mult_rec(a,b-1);
	}


