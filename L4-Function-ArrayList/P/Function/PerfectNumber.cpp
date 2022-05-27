#include<iostream>
using namespace std;

//signiture
	void perfect_num(int);


//main
	int main(void){
		int n;
		char input;
		do{
			cout<<"Please Enter Your Number : ";
			cin>>n;
			perfect_num(n);
			cout<<"do You want to countinu ? (Y/N) : ";
			cin>>input;
		}while(input=='Y');
		
		
		return 0;
	}


//function
	void perfect_num(int n){
		int result;
		for(int i=1;i<=n;i++){
			if(n%i==0&&i!=1){
				result=result+(n/i);
			}
		}
		if(result==n){
			cout<<"Your Number is Perfect"<<endl;
		}else{
			cout<<"Your Number is Not Perfect !!"<<endl;
		}
	}
