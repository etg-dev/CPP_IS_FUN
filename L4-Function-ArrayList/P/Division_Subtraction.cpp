#include<iostream>
using namespace std;

//signiture
	void divide(int,int);

//main
	int main(){
		
		int a,b;
		cout<<"please Enter Number 1 :";
		cin>>a;
		cout<<"please Enter Number 2 :";
		cin>>b;
		
		divide(a,b);
		
		return 0;
	}
	
//function
	void divide(int a,int b){
		int i;
		int n=a;
		for(i=0;a>=b;i++){
			a=a-b;
		}
		cout<<n<<" / "<<b<<" = "<<i;
	}