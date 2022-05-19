#include<iostream>
using namespace std;

//signiture
int binarySearch(int[],int,int,int);


//main
	int main(void){
		int arr[]={11,22,23,44,55,77,78};
		int key=22;
		int l=0;
		int r=(sizeof(arr)/4)-1;
		
		int result=binarySearch(arr,l,r,key);
		
		if(result==-1){
			cout<<key<<" NOT FOUND IN ARRAY";
		}else{
			cout<<key<<" FOUND IN INDEX "<<result;
		}
		
		
		return 0;
	}
	
//fucntion
	int binarySearch(int arr[],int l,int r,int key) {
		
		if(l<r){
			int mid=l+(r-l)/2;
			
			if(arr[mid]==key){
				return mid;
			}
			
			if(arr[mid]>key){
				return binarySearch(arr,l,mid-1,key);
			}
			
			if(arr[mid]<key){
				return binarySearch(arr,mid+1,r,key);
			}
			
		}
		
		return -1;
	}
	
	
	
	
	
	