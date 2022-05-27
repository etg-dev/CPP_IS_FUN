#include<bits/stdc++.h>
using namespace std;
 
	void sortRowWise(int m[][4],int r, int c){
	  
		for (int i = 0; i < r; i++){
	    
		    for (int j = 0; j < c; j++){
		      
		      for (int k = 0; k < c - j - 1; k++){
		      	
		        if (m[i][k] < m[i][k + 1]){
		        	swap(m[i][k], m[i][k + 1]);
		        }
				 
		      } 
		    }
  		}
 
		for (int i = 0; i < r; i++){
		    for (int j = 0; j < c; j++){
		    	cout << m[i][j] << " ";
			}
		    cout << endl;
	  	}
	}
 
	int main(){
		int m[][4] = {{9, 8, 7, 1},
		            {7, 3, 0, 2},
		            {9, 5, 3, 2},
		            {6, 3, 1, 2}};
		            
		int c = sizeof(m[0]) / sizeof(m[0][0]);
		int r = sizeof(m) / sizeof(m[0]);
		
		sortRowWise(m, r, c);
		
		return 0;
	}