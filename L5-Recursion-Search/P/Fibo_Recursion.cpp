#include<iostream>
using namespace std;

//signiture
	int fib(int);
	
//main
	int main (){
	    int n,result;
	    cout<<"Please Enter Your Target : ";
	    cin>>n;
	    
	    result=fib(n);
	    
	    cout <<n<<"th of fibonacci sequence = "<<result;
	    
	    return 0;
	}
	
//function 
	int fib(int n){
	    if (n <= 1)
	        return n;
	    return fib(n-1) + fib(n-2);
	}