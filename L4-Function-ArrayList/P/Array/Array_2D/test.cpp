#include<iostream>
using namespace std;

int main(void){
	int a[4][5],i,j,sum[4];
	for(i=0;i<4;i++){
		cout<<"Enter 4 Number for studen "<<i+1<<" : "<<endl;
		sum[i]=0;
		for(j=0;j<5;j++){
			cin>>a[i][j];
			sum[i]=sum[i]+a[i][j];
		}
		sum[i]=sum[i]/5;
	}
	
	for(i=0;i<4;i++){
		cout<<"The avrages is : "<<sum[i]<<" ";
	}


	return 0;
}