#include<iostream>
#include<string>
using namespace std;

//signiture


//main
	int main(void){
		int arr_grade[5];
		string arr_name[5];
		int avrage_grade[5];
		string name;
		int a;
		for(int i=0;i<5;i++){
			int sum=0;
			cout<<"Name of Studen Number "<<i+1<<" : ";
			cin>>name;
			arr_name[i]=name;
			for(int j=0;j<5;j++){
				cout<<"\tPlease Enter grade "<<j+1<<" : ";
				cin>>a;	
				arr_grade[j]=a;
				sum=sum+a;
			}
			avrage_grade[i]=sum/5;
		}
		
		cout<<endl;
		for(int i=0;i<5;i++){
			cout<<arr_name[i]<<" all avrage is :  "<<avrage_grade[i]<<endl;
		}
		
		return 0;
	}
	
//fucntion 
	