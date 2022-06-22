#include<iostream>
using namespace std;

class rectangle{
	private:
		int width;
		int height;
		
	public:
		int getwidth(){
			return width;
		}
		void setwidth(int input){
			width=input;;
		}
		
		int getheight(){
			return height;
		}
		
		void setheight(int input){
			height=input;
		}
		int get_area();
//		int get_area(){
//			return width*height;
//		}
}ra;


//fucntion
	int rectangle::get_area(){
		return width*height;
	}



//main
	int main(void){
		ra.setwidth(12);
		ra.setheight(12);
		int result=ra.get_area();
		cout<<"area= "<<result<<endl;
	}


