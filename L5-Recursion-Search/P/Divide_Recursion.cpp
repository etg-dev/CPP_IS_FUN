#include <iostream>
using namespace std;

//singnitre 
	int div_rec(int,int);  
	
//main
	int main(){
	    int a,b,result;
	    
	    cout<<"please Enter Number 1 : ";
	    cin>>a;
	    cout<<"please Enter Number 2 : ";
	    cin>>b;
	    
	    result=div_rec(a,b);
	    
	    if(result==-1){
	    	cout<<"please Enter Number 1 bigger than Number 2";
		}else{
	    	cout <<a<<" / "<<b<<" = "<< result;
		}
	    
	    
	    return 0;
	}
	
//fucntion
	int div_rec(int a, int b){
		if (b==0){
		  return 0;
		}
		else if (a-b==0){
		    return 1;
		}
		else if (a<b){
		    return -1;
		}
		else{
		    return (1+div_rec(a-b,b));
		}
	}