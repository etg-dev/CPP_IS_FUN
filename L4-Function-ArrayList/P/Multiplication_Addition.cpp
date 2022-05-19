#include<iostream>
using namespace std;

//signiture
	void mult(int,int);


//main
	int main(){
		
		int a,b;
		cout<<"Please Enter Number 1 : ";
		cin>>a;
		cout<<"Please Enter Number 2 : ";
		cin>>b;
		mult(a,b);
		
		return 0;
	}

//function
	void mult(int a,int b){
		int sum;
		for(int i=0;i<b;i++){
			sum=sum+a;
		}
		cout<<a<<" * "<<b<<" = "<<sum;
	}