#include<iostream>
#include<string>
using namespace std;

//signiture
	void rev(string);
	void symetric(string);

//main
	int main(void){
		string name="erfre";
		
		rev(name);
		
		symetric(name);
		
		
		return 0;
	}

//fucntion
	void rev(string name){
		for(int i=name.length()-1;i>=0;i--){
			cout<<name[i];
		}
		cout<<endl;
		cout<<"Length of string = "<<name.length();
		cout<<endl;
	}
	
	
	void symetric(string name){
		bool flag=true;
		int len=name.length()-1;
		for(int i=0;i<=name.length()/2;i++){
			if(name[i]!=name[len]){
				flag=false;
				break;
			}
			len--;
		}
		if(flag==true){
			cout<<"its Symetric";
		}else{
			cout<<"its antySimetric";
		}
	}