#include<iostream>
#include<string>
#include<time.h>
using namespace std;

//singniture 
	void printBoard(string[5][5]);
	
	void inputUser(string[5][5],int,string);
	
int flag=0;
//main
	int main(){
		
		//decl
		int user;
		int computer;
		string boardGame[5][5]{
			{" ","|"," ","|"," "},
			{"-","+","-","+","-"},
			{" ","|"," ","|"," "},
			{"-","+"," ","+","-"},
			{" ","|"," ","|"," "}
		};
		
		int counter;
		while(flag==0&&counter<6){
			//get input
			cout<<"please Enter Your Position (1-9) : ";
			cin>>user;
			inputUser(boardGame,user,"Human");
		
			srand(time(0));
	    	computer=(rand() % 9 + 1);
	    	inputUser(boardGame,computer,"Computer");
	    
	    	
	
			//call
			printBoard(boardGame);
			
			counter++;
		
		}
		
		
		return 0;
	}//main


//function 
	void printBoard(string arr[5][5]){
		
		for (int i = 0; i < 5; i++){
	        for (int j = 0; j < 5; j++){
	            cout<< arr[i][j];
	        }
	        cout<<endl;
    	}
    	
	}

	void inputUser(string boardGame[5][5],int user,string id){
		string rec;
		if(id=="Human"){
			rec="X";
		}else if(id=="Computer"){
			rec="O";
		}else{
			cout<<"Your input is wrong";
		}
		
		switch(user){
			case 1:
			
					boardGame[0][0]=rec;
			
			break;
			case 2:
			
					boardGame[0][2]=rec;
			
			break;
			case 3:
			
					boardGame[0][4]=rec;
				
			break;
			case 4:
			
					boardGame[2][0]=rec;
			
			break;
			case 5:
			
					boardGame[2][2]=rec;
			
			break;
			case 6:
			
					boardGame[2][4]=rec;
			
			break;
			case 7:
			
					boardGame[4][0]=rec;
			
			break;
			case 8:
			
					boardGame[4][2]=rec;
			
			break;
			case 9:
			
					boardGame[4][4]=rec;
			
			break;	
			default :
				cout<<"Your input is wrong!";
			break;
		}
		
		//int count;
		if(boardGame[0][0]==rec){
			if (rec.find("X") != string::npos) {
				cout<<"X FOUND"<<endl;
			//	count++;
			} 
		}
		
		if(boardGame[0][0]==rec&&boardGame[0][2]==rec&&boardGame[0][4]==rec&&id=="Human"){
	    	cout<<"***YOU WIN***"<<endl;
	    	flag=1;
		}
		if(boardGame[2][0]==rec&&boardGame[2][2]==rec&&boardGame[2][4]==rec&&id=="Human"){
	    	cout<<"***YOU WIN***"<<endl;
	    	flag=1;
		}
		if(boardGame[4][0]==rec&&boardGame[4][2]==rec&&boardGame[4][4]==rec&&id=="Human"){
	    	cout<<"***YOU WIN***"<<endl;
	    	flag=1;
		}
		if(boardGame[0][0]==rec&&boardGame[2][0]==rec&&boardGame[4][0]==rec&&id=="Human"){
	    	cout<<"***YOU WIN***"<<endl;
	    	flag=1;
		}
		if(boardGame[0][2]==rec&&boardGame[2][2]==rec&&boardGame[4][2]==rec&&id=="Human"){
	    	cout<<"***YOU WIN***"<<endl;
	    	flag=1;
		}
		if(boardGame[0][4]==rec&&boardGame[2][4]==rec&&boardGame[4][4]==rec&&id=="Human"){
	    	cout<<"***YOU WIN***"<<endl;
	    	flag=1;
		}
		if(boardGame[0][0]==rec&&boardGame[2][2]==rec&&boardGame[4][4]==rec&&id=="Human"){
	    	cout<<"***YOU WIN***"<<endl;
	    	flag=1;
		}
		if(boardGame[0][4]==rec&&boardGame[2][2]==rec&&boardGame[4][0]==rec&&id=="Human"){
	    	cout<<"***YOU WIN***"<<endl;
	    	flag=1;
		}
		
		//computer
		if(boardGame[0][0]==rec&&boardGame[0][2]==rec&&boardGame[0][4]==rec&&id=="Computer"){
	    	cout<<"***YOU LOST***"<<endl;
	    	flag=1;
		}
		if(boardGame[2][0]==rec&&boardGame[2][2]==rec&&boardGame[2][4]==rec&&id=="Computer"){
	    	cout<<"***YOU LOST***"<<endl;
	    	flag=1;
		}
		if(boardGame[4][0]==rec&&boardGame[4][2]==rec&&boardGame[4][4]==rec&&id=="Computer"){
	    	cout<<"***YOU LOST***"<<endl;
	    	flag=1;
		}
		if(boardGame[0][0]==rec&&boardGame[2][0]==rec&&boardGame[4][0]==rec&&id=="Computer"){
	    	cout<<"***YOU LOST***"<<endl;
	    	flag=1;
		}
		if(boardGame[0][2]==rec&&boardGame[2][2]==rec&&boardGame[4][2]==rec&&id=="Computer"){
	    	cout<<"***YOU LOST***"<<endl;
	    	flag=1;
		}
		if(boardGame[0][4]==rec&&boardGame[2][4]==rec&&boardGame[4][4]==rec&&id=="Computer"){
	    	cout<<"***YOU LOST***"<<endl;
	    	flag=1;
		}
		if(boardGame[0][0]==rec&&boardGame[2][2]==rec&&boardGame[4][4]==rec&&id=="Computer"){
	    	cout<<"***YOU LOST***"<<endl;
	    	flag=1;
		}
		if(boardGame[0][4]==rec&&boardGame[2][2]==rec&&boardGame[4][0]==rec&&id=="Computer"){
	    	cout<<"***YOU LOST***"<<endl;
	    	flag=1;
		}
		
	//	cout<<count<<endl;
		
	}



