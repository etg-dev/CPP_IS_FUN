#include<iostream>
using namespace std;

int main(){
	
	int a;
	int b;
	int c;
	
	cout<<"please Enter number 1 : ";
	cin>>a;
	
	cout<<"please Enter number 2 : ";
	cin>>b;
	
	cout<<"please Enter number 3 : ";
	cin>>c;
	
	if(a>b&&a>c) {
		cout<<"First number is greatest : "<<a;
	} else if(b>a&&b>c) {
		cout<<"Second number is greatest : "<<b;
	} else {
		cout<<"Third number is greatest : "<<c;
	}

	
	return 0;
}