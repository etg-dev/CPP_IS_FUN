#include<iostream>
using namespace std;

//signiture
	void printASC(string);


//main
	int main(void){
		string name="abcdefghijklmnopqrstuvwxyz";
		
		printASC(name);
		
		
		return 0;
	}
//97 122

//fucntion
	void printASC(string name){
		for(int i=0;i<name.length();i++){
			if(name[i]>=97&&name[i]<=122){
				int a=name[i];
				cout<<a<<" ";
			}
		}
	}