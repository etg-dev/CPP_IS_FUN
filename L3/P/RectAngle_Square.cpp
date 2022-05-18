#include<iostream>
using namespace std;

int main(){
	int n,width,height;
	cout<<"Please Enter height of rectAngle : ";
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=0;j<i;j++){
			cout<<"*";
		}
		cout<<endl;
	}
	
	cout<<"Please Enter width : ";
	cin>>width;
	cout<<"Please Enter height :";
	cin>>height;
	for(int i=0;i<height;i++){
		for(int j=0;j<width;j++){
			cout<<"*";
		}
		cout<<endl;
	}
	
	return 0;
}