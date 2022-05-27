#include <iostream>
#include<cstring>
using namespace std;

//signiture
	void enter_digit(string);

//main
	int main(){
	    
	    string str;
	    cout << "Enter Your Number : ";
	    getline(cin,str);
	    
	    enter_digit(str);
	    return 0;
	}

//function
	void enter_digit(string str){
		for(int i=0;i<str.size();i++){
    		cout<<str[i]<<endl;
		}
	}