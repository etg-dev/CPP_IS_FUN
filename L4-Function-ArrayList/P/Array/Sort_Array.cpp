#include<iostream>
using namespace std;

//signiture
	void insertionSort(int[],int);

	void printArray(int[],int);

//main
	int main(){

		int length,a;		
		cout<<"Please Enter Length of Array : ";
		cin>>length;
		int arr[length];
		
		for(int i=1;i<=length;i++){
			cout<<"Please Enter Number "<<i<<" : ";
			cin>>a;
			arr[i-1]=a;
		}
		
		insertionSort(arr,length);
		
		printArray(arr,length);
		
		return 0;
	}

//fucntion
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
	
	void printArray(int arr[],int n){
		for(int i=0;i<n;i++){
			cout<<arr[i]<<" ";
		}
	}

