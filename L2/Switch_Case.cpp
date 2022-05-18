#include<iostream>
using namespace std;

int main(){
	
	//	switch (expression)  {
	//    case constant1:
	//        // code to be executed if 
	//        // expression is equal to constant1;
	//        break;
	//
	//    case constant2:
	//        // code to be executed if
	//        // expression is equal to constant2;
	//        break;
	//        .
	//        .
	//        .
	//    default:
	//        // code to be executed if
	//        // expression doesn't match any constant
	//	}
	
		int a;
		cout<<"please Enter your Number : ";
		cin>>a;
		switch(a){
			case 1 :
				cout<<"hello";
			break;
			case 2:
				cout<<"Whats app!";
			break;
			default :
				cout<<"Your input is wrong!";
			break;	
		}
	
		
	
	
	return 0;
}