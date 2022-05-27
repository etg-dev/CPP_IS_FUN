#include <bits/stdc++.h>
using namespace std;

//signiture
	void print_matrix(int[10][10]);


//main
	int main(void){
		int arr[10][10]={
		{0,1,2,3,4,5,6,7,8,9},
		{1,1,2,3,4,5,6,7,8,9},
		{2,2,4,6,8,10,12,14,16,18},
		{3,3,6,9,12,15,18,21,24,27},
		{4,4,8,12,16,20,24,28,32,36},
		{5,5,10,15,20,25,30,35,40,45},
		{6,6,12,18,24,30,36,42,48,54},
		{7,7,14,21,28,35,42,49,56,63},
		{8,8,16,24,32,40,48,56,64,72},
		{9,9,18,27,36,45,54,63,73,81}		
		};
		
		print_matrix(arr);
		
		return 0;
	}


//function
	void print_matrix(int arr[10][10]){
		for(int i=0;i<10;i++){
			for(int j=0;j<10;j++){
				cout << setw(4) << arr[i][j] << " ";
			}
			cout<<endl;
		}
	
	}