#include<iostream>
using namespace std;

//signiture
	int fact(int);
	
	void sum(int);
	
	void avr(int);
	
	void power(int,int);

//main
	int main(void){
		int input,fn,sn,an,pn1,pn2,result;
		
		do{
			cout<<"0.EXIT"<<endl;
			cout<<"1.FACTORIAL"<<endl;
			cout<<"2.SUM"<<endl;
			cout<<"3.AVRAGE"<<endl;
			cout<<"4.POWER"<<endl;
			cout<<"Please Enter Your Program : ";
			cin>>input;
			
			switch(input){
				case 1:
					cout<<endl;
					cout<<"Please Enter Your Number : ";
					cin>>fn;
					result=fact(fn);
					if(result==-1){
						cout<<"Your input is wrong !"<<endl;
					}else{
						cout<<"Factorial of "<<fn<<" is : "<<result<<endl<<endl;
					}
				break;
				case 2:
					cout<<endl;
					cout<<"Please Enter Number of Input : ";
					cin>>sn;
					sum(sn);
				break;
				case 3:
					cout<<endl;
					cout<<"Please Enter Number of Input : ";
					cin>>an;
					avr(an);
				break;
				case 4:
					cout<<endl;
					cout<<"Please Enter Number 1 : ";
					cin>>pn1;
					cout<<"Please Enter Number 2 : ";
					cin>>pn2;
					power(pn1,pn2);
				break;
			}
			
		}while(input!=0);
		
		
		return 0;
	}

//function
	int fact(int n){
		if(n > 1){
			return n * fact(n - 1);
		}else if(n<0){
			return -1;
		}else if (n==0){
			return 1;
		}
		return 1;
	}
	
	void sum(int n){
		int a;
		int sum;
		for(int i=1;i<=n;i++){
			cout<<"Please Enter Number "<<i<<" : ";
			cin>>a;
			sum=sum+a;
		}
		cout<<"Result = "<<sum<<endl<<endl;
	}
	
	void avr(int n){
		int a;
		int av;
		int sum;
		for(int i=1;i<=n;i++){
			cout<<"Please Enter Number "<<i<<" : ";
			cin>>a;
			sum=sum+a;
		}
		av=sum/n;
		cout<<"Avrage of Number is : "<<av<<endl<<endl;
	}
	
	void power(int a,int b){
		int result=1;
		for(int i=0;i<b;i++){
			result=result*a;
		}
		cout<<"Result = "<<result<<endl<<endl;
		
	}












