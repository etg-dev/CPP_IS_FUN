#include <iostream>

using namespace std;

int matrix[3][3];

int main()
{
    
	int a;
    for(int x=0;x<3;x++)
    {
    	if(x==0){
        	cout<<"ROW 1"<<endl;
		}
		 if(x==1){
        	cout<<endl;
        	cout<<"ROW 2"<<endl;
		}
		if(x==2){
        	cout<<endl;
        	cout<<"ROW 3"<<endl;
		}
        for(int y=0;y<3;y++)
        {
        	cout<<"Please Enter Number :";
        	cin>>a;
            matrix[x][y]=a;
        }
    }

	cout<<endl<<"RESULT : "<<endl;
    

    for(int x=0;x<3;x++)  
    {
        for(int y=0;y<3;y++)  
        {
            cout<<matrix[x][y];  
        }
    cout<<endl;  
    }
    return 0;  
}