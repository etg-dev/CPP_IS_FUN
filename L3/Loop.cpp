#include<iostream>
using namespace std;

int main(){
	
//for loop
	//for (initialization; condition; update) {
	//body of-loop 
	//}
	
	for (int i = 1; i <= 5; ++i) {
        cout << i << " ";
    }
    cout<<endl;
    
    for (int i = 1; i <= 5; ++i) {
        cout <<  "Hello World! " << endl;
    }
	
	
//while 
	//while (condition) {
	//body of the loop
	//}
	
	int i = 1; 
	int a = 0;

    
    while (i <= 5) {
        cout << i << " ";
        ++i;
    }
    
   
   	while(a<=4){
		cout<<"hello world"<<endl;
		a++;
	}
    
	
//dowhile 
	//do {
	//   // body of loop;
	//}
	//while (condition);
	
	int b = 1; 

    do {
        cout << b << " ";
        ++b;
    }
    while (b < 7 );
	
	
	
	return 0;
}