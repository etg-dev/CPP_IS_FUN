#include<iostream>
using namespace std;


//signiture
	void rev_number(int);


//main
	int main(void){
		int n;
		cout<<"Please Enter Your Number : ";
		cin>>n;
		rev_number(n);
		
		return 0;
	}



//function
	void rev_number(int n){
		int reverse=0;
		int rem;
		while(n!=0){    
		    rem=n%10;      
		    reverse=reverse*10+rem;    
		    n/=10;    	
		}    
		
		cout<<"Reversed Number: "<<reverse<<endl;  
	}