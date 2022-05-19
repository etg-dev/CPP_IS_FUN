#include<iostream>
using namespace std;

//signiture
	int power_rec(int,int);


//main
	int main(void){
		int a,b,result;
		
		cout<<"please Enter Number 1 :";
		cin>>a;
		cout<<"please Enter Number 2 :";
		cin>>b;
		
		if(result==-1){
			cout<<"Please Enter Number Bigger Than Zero";
		}else{
			result=power_rec(a,b);
			cout<<a<<" ^ "<<b<<" = "<<result;
		}
		
		
		return 0;
	}
	
//fucntion
	int power_rec(int a,int b){
		if(b==1){
			return a;
		}else if(b==0){
			return 1;
		}else if(b<0){
			return -1;
		}else{
			return a * power_rec(a,b-1);
		}
	}


