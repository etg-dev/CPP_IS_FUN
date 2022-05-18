#include<iostream>
using namespace std;

int main(){
	int max,n,a;
	cout<<"please Enter limit : ";
	cin>>n;
	for(int i=1;i<=n;i++){
		cout<<"Please Enter Number "<<i<<" : ";	
		cin>>a;
		if(a>max){
			max=a;
		}
	}
	cout<<"Biggest Number is : "<<max;
	
	
	return 0;
}