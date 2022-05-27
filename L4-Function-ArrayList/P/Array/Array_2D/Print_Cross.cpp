#include<iostream>
using namespace std;

//signiture 
	void print_cross(int[4][4]);

//main
	int main(void){
		
		int arr[4][4]={
		{0,2,3,4},
		{1,0,3,4},
		{1,2,0,4},
		{1,2,3,0}};
		
		print_cross(arr);
		
		return 0;
	}

//fucntion
	void print_cross(int arr[4][4]){
		for(int i=0;i<4;i++){
			for(int j=0;j<4;j++){
				if(i==j){
					cout<<arr[i][j]<<endl;
				}
			}
		}
		
		
	}