#include<iostream>
using namespace std;

//signiture
	void rev_arr(int[],int);
	
//main
	int main(){
		int arr[]={44,33,22,11,9,8,7,6};
		int length=(sizeof(arr)/4)-1;
		
		rev_arr(arr,length);
		
		return 0;
	}
	
//function
	void rev_arr(int arr[],int n){
		
		for(int i=n;i>=0;i--){
			cout<<arr[i]<<endl;
		}
		
	}
	
	
	
	
	
	
	
	
	
	