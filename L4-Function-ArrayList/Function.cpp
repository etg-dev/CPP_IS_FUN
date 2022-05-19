#include<iostream>
using namespace std;

//signiture 
	//return type name of function(type of parameter1,type of parameter2);
	void add(int,int);
	
	int mult(int,int);


//main
	int main(){
		
	//call function 
	//function name (paramert1,parameter2);
		int a=3;
		int b=4;
		cout<<"a = "<<a<<endl<<"b = "<<b<<endl;
		add(a,b);
		
		int result=mult(a,b);
		cout<<"a*b = "<<result;
		
		return 0;
	}

//function 
	//returnType functionName (parameter1, parameter2,...) {
	//    // function body   
	//}
	void add(int a, int b) {
    cout <<"a+b = "<<(a + b)<<endl;
	}
	
	int mult(int a, int b) {
    return (a * b);
	} 
