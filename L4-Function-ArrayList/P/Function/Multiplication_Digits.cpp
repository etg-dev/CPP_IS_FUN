#include<iostream>
using namespace std;


//signiture
	void mult_digit(int);


//main
	int main(void){
		int n;
		cout<<"Please Enter Your Number : ";
		cin>>n;
		mult_digit(n);
		
		return 0;
	}



//function
	void mult_digit(int n){
		int rem;
		int mult=1;
		int temp=n;
		while(n!=0){    
		    rem=n%10;         
		    n/=10;  
			mult=mult*rem;   
			
		}    
		
		cout<<"MULTIPLICATION ALL DIGITS OF "<<temp<<" = "<<mult;

	}