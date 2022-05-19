#include<iostream>
using namespace std;

//signiture
	int linearSearch(int[],int);

//main
	int main(void){
		int arr[]={1,8,5,6,33,22,11,2,3};
		int key=22;
		
		int result=linearSearch(arr,key);
		
		if(result==-1){
			cout<<key<<" NOT FOUND IN ARRAY";
		}else{
			cout<<key<<" FOUND AT INDEX : "<<result;
		}
		
		return 0;
	}
	
//function
	int linearSearch(int arr[],int key){
		
		for(int i=0;i<9;i++){
			if(arr[i]==key){
				return i;
			}
		}
		return -1;
	}