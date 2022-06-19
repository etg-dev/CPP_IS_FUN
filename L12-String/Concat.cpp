#include<iostream>
#include<string>
using namespace std;

//signiture
	void concat(string,string);



//main
	int main(void){
		
		concat("erfan","taghinia");
		
		return 0;
	}


//fucntion
	void concat(string a,string b){
		string result=a+" "+b;
		cout<<result;
		
		//mines one because of one space 
		cout<<endl;
		cout<<"Size of final string : "<<result.length()-1;
	}