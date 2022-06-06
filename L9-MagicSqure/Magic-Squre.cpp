#include <iostream>
using namespace std;

//signiture
	void generateSquare(int);

//main
	int main(){
	 
	    int n;
	    
	    cout<<"Please Enter odd Number for magic square : ";
	    cin>>n;
	    
	    generateSquare(n);
	    
	    return 0;
	}
	
//function
	void generateSquare(int n){
	
	    int magicSquare[n][n];
	 
	  
	    memset(magicSquare, 0, sizeof(magicSquare));
	 
	  
	    int i = n / 2;
	    int j = n - 1;
	 
	  
	    for (int num = 1; num <= n * n;) {
	        if (i == -1 && j == n) 
	        {
	            j = n - 2;
	            i = 0;
	        }
	        else {
	           
	            if (j == n)
	                j = 0;
	 
	           
	            if (i < 0)
	                i = n - 1;
	        }
	        if (magicSquare[i][j]) 
	        {
	            j -= 2;
	            i++;
	            continue;
	        }
	        else
	            magicSquare[i][j] = num++; 
	 
	        j++;
	        i--; 
	    }
	 
	   
	        cout<< "\nSum of each row or column is : "<< n * (n * n + 1) / 2 << "\n\n";
	    for (i = 0; i < n; i++) {
	        for (j = 0; j < n; j++)
	            cout<<magicSquare[i][j] << " ";
	        cout << endl;
	    }
	}
 
	
	
	
	
	
	