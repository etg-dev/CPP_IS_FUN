#include<iostream>
using namespace std;

//signiture 
	bool isPrime(int);
	void printPrime(int);
//main
int main(){
	
	int n;
	cout<<"please Enter your Number : ";
	cin>>n;
	printPrime(n);
	
	
	return 0;
}

//function
bool isPrime(int n){
	for(int i=2;i<=n/2;i++){
		if(n%i==0){
			return false;
		}
	}
	return true;
}

void printPrime(int n){
	for(int i=2;i<n;i++){
		if(isPrime(i)){
			cout<<i<<" ";
		}
	}
}





