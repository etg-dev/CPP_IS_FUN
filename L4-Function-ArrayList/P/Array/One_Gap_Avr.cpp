#include<iostream>
using namespace std;

//signiture
	void one_gap_avr(int[],int,int);
	
	int avrage(int[],int);


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
		
		int avr=avrage(arr,n);
		
		one_gap_avr(arr,n,avr);
		
		
		return 0;
	}


//function

	int avrage(int arr[],int n){
		int sum=0;
		for(int i=0;i<n;i++){
			sum=sum+arr[i];
		}		
		int avr=sum/n;

		return avr;
	}
	
	void one_gap_avr(int arr[],int n,int avr){
		cout<<avr<<" AVRAGE OF NUMBER OF ARRAY LIST"<<endl;
		for(int i=0;i<n;i++){
			if((arr[i]+1)==avr||(arr[i]-1)==avr){
				cout<<arr[i]<<" ->One Unit Bigger or Lower From Avrage"<<endl;
			}
		}
	}














