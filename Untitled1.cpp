#include <bits/stdc++.h>
#include<cstring>
using namespace std;

struct strudent{
	int age;
	string name;
	int avrage;
}a;

struct rectangle{
	int width;
	int height;
}rect;
//function
	int* max(int& m,int& n){
		if(m>n){
			return &m;
		}else{
			return &n;
		}
	}
	
	float& component(float* v, int k){ 
		return v[k-1];
	}
	
	void print_array(int arr[], int size){
 
	    static int i;
	  
	    if (i == size) {
	        i = 0;
	        cout << endl;
	        return;
	    }
	  
	    cout << arr[i] << " ";
	    i++;
	  
	    print_array(arr, size);
    
	}

	int calc(rectangle a1){
		return (a1.width*a1.height);
	}
//main
	int main(){ 
		a.age=22;
		a.name="erfan";
		a.avrage=18;
		
		rect.height=22;
		rect.width=10;
		
		
		
		
	
//		int m=44;
//		int n=22;
//		
		//cout<<max(m,n);
		
		
//	float v[4];
//	
//	for (int k = 1; k <= 4; k++)
//		component(v,k) = 1.0/k;
//	for (int i = 0; i < 4; i++)
//		cout << "v[" << i << "] =" << v[i] << endl;
//			
//		const int SIZE = 3;
//		short a[SIZE] = {22, 33, 44};
//		
//		cout << "a = " << a << endl;
//		cout << "sizeof(short) = " << sizeof(short) << endl;
//		
//		short* end = a + SIZE; // converts SIZE to offset 6
//		short sum = 0;
//		
//		for (short* p = a; p < end; p++){
//		//	sum += *p;
//			cout << "\t p = " << p;
//			cout << "\t *p = " << *p<<endl;
//		//	cout << "\t sum = " << sum << endl;
//		}
//		
//		cout << "end = " << end << endl;



	int arr[] = { 3, 5, 6, 8, 1 };
	int n=sizeof(arr)/sizeof(int);
	
	print_array(arr, n);
  
  
  	cout<<"-----------"<<endl;
		cout<<a.age<<endl;
		cout<<a.name<<endl;
		
	int result=calc(rect);
	cout<<result;
		
    return 0;
		
	}



	
	
	
	