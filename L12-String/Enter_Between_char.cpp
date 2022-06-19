#include<iostream>
#include<string>
using namespace std;


//signiture
	void enterChar(string);

//main
	int main(void){
		
		string name="Erfan Taghinia";
	
		enterChar(name);
		
		return 0;
	}
//fucntion
	void enterChar(string name){
		//int count=0;
		for(int i=0;i<name.length();i++){
			if(name[i]>=65&&name[i]<=90){
				int asc=name[i];
				int final=asc+32;
				name[i]=final;
				//count++
			}
			cout<<name[i]<<endl;
		}
		//cout<<"c ="<<count;
	}