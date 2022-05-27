#include<iostream>
using namespace std;

//signiture 
	void sum(int[5][5]);


//main
	int main(void){
		int arr[5][5]={
		{1,2,3,4,5},
		{1,2,3,4,5},
		{1,2,3,4,5},
		{1,2,3,4,5},
		{1,2,3,4,5},
		};
		
		sum(arr);
		
		
		return 0;
	}


//function
	void sum(int arr[5][5]){
		int temp=0;
		int sum=0;
		for(int i=0;i<5;i++){
			temp=0;
			for(int j=0;j<5;j++){
				temp=temp+arr[i][j];
			}
			sum=sum+temp;
		}
		cout<<"SUM OF ALL ROW : "<<sum;
	}


