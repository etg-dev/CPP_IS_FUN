#include<iostream>
#include<string>
using namespace std;

//signiture
	void convert(string);
	void count_repeat(string);
	
//main
	int main(void){
		
		string name="erffann";
		
		convert(name);
		cout<<endl;
		count_repeat(name);
		
		return 0;
	}
	
//function
	void convert(string name){
		//97 122
		for(int i=0;i<name.length();i++){
			if(name[i]>=97&&name[i]<=122){
				int asc=name[i];
				int result=asc-32;
				name[i]=result;
			}
		}
		cout<<name;
	}
	
	void count_repeat(string name){
		int asc[name.length()];
		
		for(int i=0;i<name.length();i++){
			asc[i]=name[i];
			//cout<<asc[i]<<" ";
		}
		
		for(int i=0;i<name.length();i++){
			for(int j=0;j<name.length()-i-1;i++){
				if(asc[j]>asc[j+1]){
					int temp=asc[j];
					asc[j]=asc[j+1];
					asc[j+1]=temp;
				}
			}
		}
		
		for(int i=0;i<name.length();i++){
			if(asc[i]==asc[i+1]){
				char a=asc[i];
				cout<<a<<" ";
			}
		}
		
	}
