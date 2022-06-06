#include<iostream>
#include<string>
using namespace std;

struct Date{
	int year;
	int mounth;
	int day;
}s;

struct staff{
	int salary;
	string name;
	Date enter;
}a[5];

int main(void){
	for(int i=0;i<3;i++){
	
		cout<<"Staff number "<<i+1<<endl;
		cout<<"Please Enter Your name : ";
		cin>>a[i].name;
		cout<<"Please Enter Your salary : ";
		cin>>a[i].salary;
		cout<<"Please Enter day : ";
		cin>>a[i].enter.day;
		cout<<"Please Enter mounth : ";
		cin>>a[i].enter.mounth;
		cout<<"Please Enter year : ";
		cin>>a[i].enter.year;
	}
	
	int day[3];
	int index;
	for(int i=0;i<3;i++){
		int mounth=a[i].enter.year*12;
		day[i]=(mounth+a[i].enter.mounth)*30;
		index=i;
	}
	int min=day[0];
	for(int i=0;i<3;i++){
		if(day[i]<min){
			min=day[i];
			index=i;
		}
	}
	cout<<min;
	
	
	
//	for(int i=0;i<3;i++){
//		for(int j=0;j<3;j++){
//			if(a[j].enter.year<a[j+1].enter.year){
//				int temp1=a[j].enter.year;
//				a[j].enter.year=a[j+1].enter.year;
//				a[j+1].enter.year=temp1;
//				int indx=j;
//			}
//			if(a[j].enter.mounth<a[j+1].enter.mounth){
//				int temp2=a[j].enter.mounth;
//				a[j].enter.mounth=a[j+1].enter.mounth;
//				a[j+1].enter.mounth=temp2;
//				
//				string tempname2=a[j].name;
//				a[j]=a[j+1].name;
//				a[j+1]=tempname2;
//			}
//			if(a[j].enter.day<a[j+1].enter.day){
//				int temp3=a[j].enter.day;
//				a[j].enter.day=a[j+1].enter.day;
//				a[j+1].enter.day=temp3;
//				
//				string tempname3=a[j].name;
//				a[j]=a[j+1].name;
//				a[j+1]=tempname3;
//			}
//		}
//	}
//	cout<<endl<<endl;
//	for(int i=0;i<3;i++){
//		cout<<a[i].enter.year<<endl;
//		cout<<a[i].name<<endl;
//	}
	
	
	
	
	return 0;
}