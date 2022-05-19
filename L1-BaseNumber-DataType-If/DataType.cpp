#include<iostream>
using namespace std;


int main(){
		
	//-2147483649	
	int a=2147483647;
	cout<<"int : "<<a<<endl;
	
	//4byte
	float b=1.1;
	cout<<"float : "<<b<<endl;
	
	//8byte
	//45E12 is equal to 45*10^12
	double c=45E12;
	cout<<"double : "<<c<<endl;
	
	//1byte
	char d='a';
	cout<<"char : "<<d<<endl;
	
	//2byte
	//ASCII Code
	wchar_t e='A';
	cout<<"wchar_t : "<<e<<endl;
	//to convert ASCCII Code to Char
	cout<<char(65);
	
	//1byte
	//0 -> false 1-> true 
	bool f=true;
	cout<<"bool : "<<f<<endl;
	
	//void 
	//represent 0
	
	
	return 0;
}
	
	
