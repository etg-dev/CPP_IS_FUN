#include<iostream>
using namespace std;

//RECERTION
	//void recurse()
	//{
	//    ... .. ...
	//    recurse();
	//    ... .. ...
	//}
	
	
	//int main()
	//{
	//    ... .. ...
	//    recurse();
	//    ... .. ...
	//}

//signiture
	int factorial(int);


//main
	int main(void){
		int n, result;
	
	    cout << "Enter a non-negative number: ";
	    cin >> n;
	
	    result = factorial(n);
	    cout << "Factorial of " << n << " = " << result;
	    return 0;
}


//function
	int factorial(int n) {
	    if (n > 1) {
	        return n * factorial(n - 1);
	    } else {
	        return 1;
	    }
	}


