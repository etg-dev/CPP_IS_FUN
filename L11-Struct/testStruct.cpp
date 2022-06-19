#include<iostream>
#include<string>
using namespace std;

////struct
//struct student{
//	string name;
//	int avrage;
//	int nCode;
//}s;
//
////signiture
//
//
//
////main
//	int main(void){
//		s.avrage=12;
//		s.name="Erfan";
//		s.nCode=9;
//		
//		cout<<s.name;
//		
//		
//		
//		
//		return 0;
//	}
//	
////fucntion
//	




//class MyClass {       // The class
//  public:             // Access specifier
//    int myNum;        // Attribute (int variable)
//    string myString;  // Attribute (string variable)
//};
//
//int main() {
//  MyClass myObj;  // Create an object of MyClass
//
//  // Access attributes and set values
//  myObj.myNum = 15; 
//  myObj.myString = "Some text";
//
//  // Print attribute values
//  cout << myObj.myNum << "\n";
//  cout << myObj.myString;
//  return 0;
//}

//class Car {
//  public:
//    string brand;  
//    string model;
//    int year;
//    void myMethod() {  // Method/function defined inside the class
//      cout << "Hello World!"<<endl;
//    }
//};
//
//int main() {
//  // Create an object of Car
//  Car carObj1;
//  carObj1.brand = "BMW";
//  carObj1.model = "X5";
//  carObj1.year = 1999;
//  carObj1.myMethod();
//
//  // Create another object of Car
//  Car carObj2;
//  carObj2.brand = "Ford";
//  carObj2.model = "Mustang";
//  carObj2.year = 1969;
//
//  // Print attribute values
//  cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
//  cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";
//  return 0;
//}


//class Car {
//  public:
//    int speed(int maxSpeed);
//};
//
//int Car::speed(int maxSpeed) {
//  return maxSpeed+10;
//}
//
//int main() {
//  Car myObj; 
//  cout << myObj.speed(200); 
//  return 0;
//}


//class MyClass {     // The class
//  public:           // Access specifier
//    MyClass() {     // Constructor
//      cout << "Hello World!";
//    }
//};
//
//int main() {
//  MyClass myObj;    // Create an object of MyClass (this will call the constructor)
//  return 0;
//}
//

//class Car {        // The class
//  public:          // Access specifier
//    string brand;  // Attribute
//    string model;  // Attribute
//    int year;      // Attribute
//    Car(string x, string y, int z) { // Constructor with parameters
//      brand = x;
//      model = y;
//      year = z;
//    }
//};
//
//int main() {
//  // Create Car objects and call the constructor with different values
//  Car carObj1("BMW", "X5", 1999);
//  Car carObj2("Ford", "Mustang", 1969);
//
//  // Print values
//  cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
//  cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";
//  return 0;
//}


class Employee {
  private:
    // Private attribute
    int salary;

  public:
    // Setter
    void setSalary(int s) {
      salary = s;
    }
    // Getter
    int getSalary() {
      return salary;
    }
};

int main() {
  Employee myObj;
  myObj.setSalary(50000);
  cout << myObj.getSalary();
  return 0;
}

