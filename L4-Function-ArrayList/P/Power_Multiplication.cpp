#include<iostream>
using namespace std;
//signiture
	void power(int,int);
	
//main	
	int main(){
		int a,b;
		cout<<"please Enter Number 1 : ";
		cin>>a;
		cout<<"please Enter Number 2 : ";
		cin>>b;
		power(a,b);
		
		
		return 0;
	}

//fucntion
//2 //3
	void power(int a,int b){
		int temp=1;
		for(int i=0;i<b;i++){
			temp=temp*a;
		}
		cout<<a<<" ^ "<<b<<" = "<<temp;
	}