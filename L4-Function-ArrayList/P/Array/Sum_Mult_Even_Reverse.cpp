#include<iostream>
using namespace std;

//signiture
	void sum_arr(int[],int);
	
	void mult_arr(int[],int);
	
	void even_arr(int[],int);
	
	void odd_arr(int[],int);
	
	void reverse(int[],int);

//main
	int main(void){
		int n,input,in;
		cout<<"Please Enter Length of Array list : ";
		cin>>n;
		int arr[n];
		for(int i=1;i<=n;i++){
			cout<<"Please Enter Number "<<i<<" : ";
			cin>>input;
			arr[i-1]=input;
		}
		
		do{
			cout<<"0.EXIT"<<endl;
			cout<<"1.SUM OF ARRAY"<<endl;
			cout<<"2.MULTIPICATION OF ARRAY"<<endl;
			cout<<"3.ALL EVEN IN ARRAY"<<endl;
			cout<<"4.ALL ODD IN ARRAY"<<endl;
			cout<<"5.REVERCE ARRAY"<<endl;
			
			cout<<"Please Enter Your Program : ";
			cin>>in;
			
			switch(in){
				case 1:
					sum_arr(arr,n);
				break;
				case 2:
					mult_arr(arr,n);
				break;
				case 3:
					even_arr(arr,n);
				break;
				case 4:
					odd_arr(arr,n);
				break;
				case 5:
					reverse(arr,n);
				break;
				default: 
					cout<<"Your Input is Wrong";
				break;
			}
			
		}while(in!=0);
	
		return 0;
	}

//function
	void sum_arr(int arr[],int n){
		int sum=0;
		for(int i=0;i<n;i++){
			sum=sum+arr[i];
		}
		cout<<"Sum of the all integer in array is : "<<sum<<endl<<endl;
	}
	
	void mult_arr(int arr[],int n){
		int sum=1;
		for(int i=0;i<n;i++){
			sum=sum*arr[i];
		}
		cout<<"Multiplication of the all integer in array is : "<<sum<<endl<<endl;
	}
	
	void even_arr(int arr[],int n){
		cout<<"all Even in array is : ";
		for(int i=0;i<n;i++){
			if(arr[i]%2==0){
				cout<<arr[i]<<" ";
			}
		}
		cout<<endl<<endl;
	}
	
	void odd_arr(int arr[],int n){
		cout<<"all odd in array is : ";
		for(int i=0;i<n;i++){
			if(arr[i]%2!=0){
				cout<<arr[i]<<" ";
			}
		}
		cout<<endl<<endl;
	}
	
	void reverse(int arr[],int n){
		cout<<"Reverse of Array : ";
		for(int i=n-1;i>=0;i--){
			cout<<arr[i]<<" ";
		}
		cout<<endl<<endl;
	}












