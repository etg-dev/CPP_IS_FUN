#include<iostream>
using namespace std;

int main(){
	
	//if (condition) {
  	// body of if statement}
  	
  	int number;
  	int num;

  	cout << "Enter an integer: ";
  	cin >> number;

  	// checks if the number is positive
  	if (number > 0) {
    	cout << "You entered a positive integer: " << number << endl;
  	}

  	cout << "This statement is always executed."<<endl;


	//	if (condition) {
	//  	// block of code if condition is true
	//	}
	//	else {
	//	  // block of code if condition is false
	//	}
			
	cout << "Enter an integer: ";
  	cin >> number;

  	if (number >= 0) {
    	cout << "You entered a positive integer: " << number << endl;
  	}
  	else {
    	cout << "You entered a negative integer: " << number << endl;
  	}

  	cout << "This line is always printed."<<endl;	
	  
	  
	//	if (condition1) {
	//  	// code block 1
	//	}
	//	else if (condition2){
	//	  // code block 2
	//	}
	//	else {
	//	  // code block 3
	//	}  	
	
	cout << "Enter an integer: ";
  	cin >> number;

  	if (number > 0) {
    	cout << "You entered a positive integer: " << number << endl;
  	} 
  	else if (number < 0) {
    	cout << "You entered a negative integer: " << number << endl;
  	} 
  	else {
    	cout << "You entered 0." << endl;
  	}

  	cout << "This line is always printed."<<endl;
  	
  	
  	
  	//Nested if
  	
  	// outer if statement
	//if (condition1) {
	//
	//  // statements
	//
	//  // inner if statement
	//  if (condition2) {
	//    // statements
	//  }
	//}
	
	cout << "Enter an integer: ";  
    cin >> num; 
	if (num != 0) {
        
	    // inner if condition
	    if (num > 0) {
	      cout << "The number is positive." << endl;
	    }
	    // inner else condition
	    else {
	      cout << "The number is negative." << endl;
	    }  
  	}
    // outer else condition
    else {
		cout << "The number is 0 and it is neither positive nor negative." << endl;
    }

    cout << "This line is always printed." << endl;
	
	
	
	
				
	
	return 0;
}