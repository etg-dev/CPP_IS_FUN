#include<iostream>
using namespace std;

//signiture 
	void selectionSort(int[],int);

//main
	int main(void){
		int arr[]={66,55,4,3,8,9,1,2,77,88,44};
		int length=11;
				
		selectionSort(arr,length);
		
		for(int c : arr){
			cout<<c<<" ";
		}
		return 0;
	}


//function
	void selectionSort(int arr[],int n){
		for(int i=0;i<n-1;i++){
			int min_idx=i;
			for(int j=i+1;j<n;j++){
				if(arr[j]<arr[min_idx]){
					min_idx=j;
				}
			}
			int temp=arr[i];
			arr[i]=arr[min_idx];
			arr[min_idx]=temp;
		}
	}