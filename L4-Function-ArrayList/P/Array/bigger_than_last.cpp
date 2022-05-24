#include<iostream>
using namespace std;

//signiture
	void bigger_than_last(int[],int);

//main
	int main(void){
		int n,input;
		cout<<"Please Enter Length of Array list : ";
		cin>>n;
		int arr[n];
		for(int i=1;i<=n;i++){
			cout<<"Please Enter Number "<<i<<" : ";
			cin>>input;
			arr[i-1]=input;
		}
		
		bigger_than_last(arr,n);
		
		return 0;
	}

//funtion
	void bigger_than_last(int arr[],int n){
		cout<<arr[n-1]<<" LAST ONE IN ARRAY LIST"<<endl<<endl;
		for(int i=0;i<n;i++){
			if(arr[i]<arr[n-1]){
				cout<<arr[i]<<" LOWER THAN LAST ONE"<<endl;
			}
		}
	}


