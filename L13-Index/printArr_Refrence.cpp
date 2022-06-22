#include<iostream>
using namespace std;

//function


//main
	int main(void){
		
//		short a[] = {22, 33, 44, 55, 66};
//		//cout << "a =" << a << ", *a =" << *a << endl;
//		
//		for (short* p = a; p < a +5; p++)
//			cout <<*p << endl;
//		
int sum=0;
	short a[]={0,33,22,11,66};
	for(short* p=a;p<a+5;p++){
		sum=sum+(*p);
		cout<<*p<<endl;
	}
	cout<<sum;
	
		return 0;
	}