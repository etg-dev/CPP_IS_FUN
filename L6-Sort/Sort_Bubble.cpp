#include<iostream>
using namespace std;

//signiture 
	void bubbleSort(int[],int);
	
//main
	int main(void){
		int arr[] = {8,7,44,22,11,23,4,3,2,1};
		
		bubbleSort(arr,10);
		
		for(int c : arr){
			cout<<c<<" ";
		}
		
    	return 0;
	}


//function
	void bubbleSort(int arr[],int n){
		for(int i=0;i<n;i++){
			for(int j=0;j<n-i-1;j++){
				if(arr[j]>arr[j+1]){
					int temp=arr[j];
					arr[j]=arr[j+1];
					arr[j+1]=temp;
				}
			}
		}
	}
	
	
	
	
	
	
	
	