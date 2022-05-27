#include <bits/stdc++.h>
using namespace std;

//signiture
	void avr_arr(int[4][5]);

//main
	int main(void){
		
		int arr[4][5];
		int a;
		for(int i=0;i<4;i++){
			int t1=i;
			cout<<"Student Number "<<t1+1<<" : "<<endl;
			for(int j=0;j<5;j++){
				int t2=j;
				cout<<"\tPlease Enter Number "<<t2+1<<" : ";
				cin>>a;
				arr[i][j]=a;
			}
		}
		
		avr_arr(arr);
		
		return 0;
	}

//function
	void avr_arr(int arr[4][5]){
		cout<<endl;
		int sum;
		int t1;
		for(int i=0;i<4;i++){
			sum=0;
			int avr=0;
			t1=i;
			for(int j=0;j<5;j++){
				sum=sum+arr[i][j];
			}
			cout<<endl;
			avr=sum/5;
			cout<<"Avrage Score Student number "<<t1+1<<" = "<<avr<<endl;
		}
	}
	







