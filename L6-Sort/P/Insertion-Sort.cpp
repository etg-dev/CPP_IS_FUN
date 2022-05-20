#include<iostream>
using namespace std;

//signiture 
	void insertionSort(int[],int);
	void printArr(int[],int);


//main
	int main(void){
		int arr[]={77,55,88,99,5,3,7,11,22,6,8};
		int length=11;
		insertionSort(arr,length);
		printArr(arr,length);
		return 0;
	}


//function
	void insertionSort(int arr[],int n){
		for(int i=0;i<n;i++){
			int key=arr[i];
			int j=i-1;
			while(j>=0&&arr[j]>key){
				arr[j+1]=arr[j];
				j--;
			}
			arr[j+1]=key;
		}
	}
	
	void printArr(int arr[],int n){
		for(int i=0;i<n;i++){
			cout<<arr[i]<<" ";
		}
	}