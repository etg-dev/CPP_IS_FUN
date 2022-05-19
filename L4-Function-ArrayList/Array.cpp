#include<iostream>
using namespace std;

int main(){
	//array 
	//dataType arrayName[arraySize];
	//index 0->1 | 1->2 | 2->3 | 3->4 | 4->5 
	int x[5]={1,2,3,4,5};
	
	// syntax to access array elements
	//arrayName[index];
	int x0=x[0];
	cout<<x0<<endl;
	
	for(int i=0;i<sizeof(x)/4;i++){
		cout<<"Index "<<i<<" : "<<x[i]<<endl;
	}
	
	//////////////
	
	float numbers[3];

	cout << "Enter 5 numbers: " << endl;
	
	//int 4
	//float 4
	//double 8
	 //sizeof(arrayName)/sizeof(*arrayNumber)
	for (int i = 0; i < sizeof(numbers)/4; i++) {
		cin >> numbers[i];
	}
	
	cout << "The numbers are: ";
	
	//print
	for (int a : numbers) {
	    cout << a << "  ";
	}
	
	cout<<sizeof(int);
	cout<<sizeof(*numbers);

	return 0;
}