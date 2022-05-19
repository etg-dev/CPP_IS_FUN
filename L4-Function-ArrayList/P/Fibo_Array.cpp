#include<iostream>
using namespace std;


int main(){
	int target;
	//int n;
//	cout<<"please enter Size of array : ";
//	cin>>n;
	cout<<"please Enter Your Number of fibo sequence : ";
	cin>>target;
	
	int n=target+2; 
	
	int arr[n];
	arr[0]=1;
	arr[1]=1;
	
	
	if(target==0||target==1){
		cout<<"1";
	}else{
		cout<<arr[0]<<" "<<arr[1]<<" ";
		for(int i=2;i<(sizeof(arr)/4)-2;i++){
			arr[i] = arr[i - 1] + arr[i - 2];
			cout<<arr[i]<<" ";
		}
	}
	
	
	return 0;
}

//fucntion

	