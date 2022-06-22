#include<iostream>
using namespace std;

	//void sort(int n, int* ptr){
	//   
	//    for (int i = 0; i < n; i++) {
	// 
	//        for (int j = i + 1; j < n; j++) {
	// 
	//            if (*(ptr + j) < *(ptr + i)) {
	// 
	//                int t = *(ptr + i);
	//                *(ptr + i) = *(ptr + j);
	//                *(ptr + j) = t;
	//            }
	//        }
	//    }
	// 
	//    for (int i = 0; i < n; i++)
	//        printf("%d ", *(ptr + i));
	//}
	// 

	void sort(int n,int* ptr){
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				if(*(ptr+j)<*(ptr+i)){
					int t=*(ptr+i);
					*(ptr+i)=*(ptr+j);
					*(ptr+j)=t;
				}
			}
		}
		
		for(int i=0;i<n;i++){
			cout<<*(ptr+i)<<" ";
		}
	}
 
	//int*loc(int a[],int n,int key){
	//	for(int i=0;i<n;i++)
	//		if(a[i]==key)
	//			return(&a[i]);
	//	return NULL;
	//}

	int* Loc(int n,int arr[],int key){
		for(int i=0;i<n;i++){
			if(arr[i]==key){
				return &arr[i];
			}
			return NULL;
		}
	}
	
	double* copy(double*a,int n){
		double* p=new double[n];
		for(int i=0;i<n;i++){
			*(p+i)=*(a+i);
			return p;
		}
	}
	
	void print(double*a,int n){
		for(int i=0;i<n;i++)
			cout<<*(a+i)<<"\t";
		cout<<endl;
	}

	
	int main(){
		//	    int n = 5;
		//	    int arr[] = { 0, 23, 14, 12, 9 };
		//	 
		//	    sort(n, arr);
			 
		
		//	int a[8]={22,33,44,55,66,77,88,99},*p=0,key;
		//	//do{
		//		cin>>key;
		//		p=loc(a,8,key);
		//		
		//		if(p)
		//			cout<<p<<","<<*p<<endl;
		//		else
		//			cout<<key<<"was not found.\n";
		//	//}while(key>0);
		
		
		double a[8]={22.3,33.3,44.4,55.5,66.6,77.7,88.8,99.9};
		cout<<"before copy:\n";
		cout<<"a[]=";
		print(a,8);
		
		double*b=0;
		
		b=copy(a,8);
		cout<<"after copy:\n";
		a[2]=a[4]=11.1;
		cout<<"a[]=";
		print(a,8);
		cout<<"b[]=";
		print(b,8);
		
		
		
		
		
		

	    return 0;
	}