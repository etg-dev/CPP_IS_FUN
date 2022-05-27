#include<iostream>
using namespace std;

//signiture
	void print_square(int);

//main
	int main(void){
		int n;
		
		cout<<"Please Enter Width and Height : ";
		cin>>n;
		
		print_square(n);
		
		return 0;
	}

//function
	void print_square(int n){
		for(int i=1;i<=n;i++){
			for(int j=0;j<n;j++){
				cout<<"$";
			}
			cout<<endl;
		}
		
	}