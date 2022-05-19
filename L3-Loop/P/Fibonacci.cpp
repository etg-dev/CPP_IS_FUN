#include<iostream>
using namespace std;

int main(){
	//1 1 2 3 5 8 13 21 34 -> fibonacci
	int a=1;
	int b=1;
	int n,temp;
	cout<<"please Enter Target :";
	cin>>n;
	if(n==1||n==2){
		
		cout<<a;
		
	}else{
		
		for(int i=2;i<n;i++){
			temp=a+b;
			b=a;
			a=temp;
		}
		cout<<temp;
		
	}
	
	return 0;
}