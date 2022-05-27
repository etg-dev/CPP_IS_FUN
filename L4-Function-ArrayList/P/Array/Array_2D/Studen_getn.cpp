#include <bits/stdc++.h>
#include<cstring>
using namespace std;

//signiture
	void get_name(string[]);
	
	void get_number(int[5][4],string[5]);


//main
	int main(void){
		string name[5];
		
		int arr[5][4]={
		{12,15,16,17},
		{12,15,16,17},
		{12,15,16,17},
		{12,15,16,17},
		{12,15,16,17},
		};
		
		get_name(name);
		
		cout<<endl;
		
		get_number(arr,name);
	
		return 0;
	}


//function
	void get_name(string arr[]){
		
		string str;
		for(int i=0;i<5;i++){
			cout << "Enter a Name "<<i+1<<" : ";
	    	getline(cin, str);
	    	arr[i]=str;
		}
	}
	
	void get_number(int arr[5][4],string name[5]){
		for(int i=0;i<5;i++){
			cout<<name[i]<<" : ";
			for(int j=0;j<4;j++){
				cout<<setw(4)<<arr[i][j]<<" ";
			}
			cout<<endl;
		}
	}
