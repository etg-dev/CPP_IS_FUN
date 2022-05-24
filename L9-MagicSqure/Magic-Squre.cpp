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
	 
	    // set all slots as 0
	    memset(magicSquare, 0, sizeof(magicSquare));
	 
	    // Initialize position for 1
	    int i = n / 2;
	    int j = n - 1;
	 
	    // One by one put all values in magic square
	    for (int num = 1; num <= n * n;) {
	        if (i == -1 && j == n) // 3rd condition
	        {
	            j = n - 2;
	            i = 0;
	        }
	        else {
	            // 1st condition helper if next number
	            // goes to out of square's right side
	            if (j == n)
	                j = 0;
	 
	            // 1st condition helper if next number
	            // is goes to out of square's upper side
	            if (i < 0)
	                i = n - 1;
	        }
	        if (magicSquare[i][j]) // 2nd condition
	        {
	            j -= 2;
	            i++;
	            continue;
	        }
	        else
	            magicSquare[i][j] = num++; // set number
	 
	        j++;
	        i--; // 1st condition
	    }
	 
	    // Print 
	        cout<< "\nSum of each row or column is : "<< n * (n * n + 1) / 2 << "\n\n";
	    for (i = 0; i < n; i++) {
	        for (j = 0; j < n; j++)
	 
	            // setw(7) is used so that the matrix gets
	            // printed in a proper square fashion.
	            cout<<magicSquare[i][j] << " ";
	        cout << endl;
	    }
	}
 
	
	
	
	
	
	