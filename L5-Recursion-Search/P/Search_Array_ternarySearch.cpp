#include<iostream>
using namespace std;

//signiture
int ternarySearch(int[],int,int,int);


//main
	int main(void){
		int arr[]={11,22,23,44,55,77,78};
		int key=78;
		int l=0;
		int r=(sizeof(arr)/4)-1;
		
		int result=ternarySearch(arr,l,r,key);
		
		if(result==-1){
			cout<<key<<" NOT FOUND IN ARRAY";
		}else{
			cout<<key<<" FOUND IN INDEX "<<result;
		}
		
		
		return 0;
	}
	
//fucntion
	int ternarySearch(int arr[],int l,int r,int key) {
		if(l<r){
			int mid1=l+(r-l)/3;
			int mid2=r-(r-l)/3;
			
			if(arr[mid1]==key){
				return mid1;
			}
			
			if(arr[mid2]==key){
				return mid2;
			}
			
			if(arr[mid1]>key){
				return ternarySearch(arr,l,mid1-1,key);
			}
			
			if(arr[mid1]<key&&arr[mid2]>key){
				return ternarySearch(arr,mid1+1,mid2-1,key);
			}
			
			if(arr[mid2]<key){
				return ternarySearch(arr,mid2+1,r,key);
			}
		}
		
		return -1;
	}
	
	
	
	
	
	