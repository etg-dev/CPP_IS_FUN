#include<iostream>
#include<string>
#include<time.h>
using namespace std;

int flag=0;
string sUser;
string sComputer;
int computer;

//singniture 
	void printBoard(string[5][5]);
	
	void inputUser(string[5][5],int,string);
	
	void isFinished(string[5][5],string,string);
	
	void isValid(string[5][5]);
	
	void tryAgain(string[5][5],int,string);
	

//main
	int main(){
		
		//decl
		int user;
		
		int counter;
		string boardGame[5][5]{
			{" ","|"," ","|"," "},
			{"-","+","-","+","-"},
			{" ","|"," ","|"," "},
			{"-","+"," ","+","-"},
			{" ","|"," ","|"," "}
		};
		
		//&&counter<6
		while(flag==0){
			//get input
			cout<<"please Enter Your Position (1-9) : ";
			cin>>user;
			sUser=to_string(user);
			inputUser(boardGame,user,"Human");
		
			srand(time(0));
	    	computer=(rand() % 9 + 1);
	    	sComputer=to_string(computer);
	    	inputUser(boardGame,computer,"Computer");
	    
	    	
			//call
			printBoard(boardGame);
			counter++;
			
			if(counter==5){
				cout<<"DRAW";
				flag=1;
			}
			
		}
		
		return 0;
	}


//function 
	void printBoard(string arr[5][5]){
		
		for (int i = 0; i < 5; i++){
	        for (int j = 0; j < 5; j++){
	            cout<< arr[i][j];
	        }
	        cout<<endl;
    	}
    	
	}

	void isFinished(string boardGame[5][5],string rec,string id){
		
		if(boardGame[0][0]==rec&&boardGame[0][2]==rec&&boardGame[0][4]==rec&&id=="Human"){
	    	cout<<"***YOU WIN***"<<endl;
	    	flag=1;
		}
		else if(boardGame[2][0]==rec&&boardGame[2][2]==rec&&boardGame[2][4]==rec&&id=="Human"){
	    	cout<<"***YOU WIN***"<<endl;
	    	flag=1;
		}
		else if(boardGame[4][0]==rec&&boardGame[4][2]==rec&&boardGame[4][4]==rec&&id=="Human"){
	    	cout<<"***YOU WIN***"<<endl;
	    	flag=1;
		}
		else if(boardGame[0][0]==rec&&boardGame[2][0]==rec&&boardGame[4][0]==rec&&id=="Human"){
	    	cout<<"***YOU WIN***"<<endl;
	    	flag=1;
		}
		else if(boardGame[0][2]==rec&&boardGame[2][2]==rec&&boardGame[4][2]==rec&&id=="Human"){
	    	cout<<"***YOU WIN***"<<endl;
	    	flag=1;
		}
		else if(boardGame[0][4]==rec&&boardGame[2][4]==rec&&boardGame[4][4]==rec&&id=="Human"){
	    	cout<<"***YOU WIN***"<<endl;
	    	flag=1;
		}
		else if(boardGame[0][0]==rec&&boardGame[2][2]==rec&&boardGame[4][4]==rec&&id=="Human"){
	    	cout<<"***YOU WIN***"<<endl;
	    	flag=1;
		}
		else if(boardGame[0][4]==rec&&boardGame[2][2]==rec&&boardGame[4][0]==rec&&id=="Human"){
	    	cout<<"***YOU WIN***"<<endl;
	    	flag=1;
		}
		
		//computer
		else if(boardGame[0][0]==rec&&boardGame[0][2]==rec&&boardGame[0][4]==rec&&id=="Computer"){
	    	cout<<"***YOU LOST***"<<endl;
	    	flag=1;
		}
		else if(boardGame[2][0]==rec&&boardGame[2][2]==rec&&boardGame[2][4]==rec&&id=="Computer"){
	    	cout<<"***YOU LOST***"<<endl;
	    	flag=1;
		}
		else if(boardGame[4][0]==rec&&boardGame[4][2]==rec&&boardGame[4][4]==rec&&id=="Computer"){
	    	cout<<"***YOU LOST***"<<endl;
	    	flag=1;
		}
		else if(boardGame[0][0]==rec&&boardGame[2][0]==rec&&boardGame[4][0]==rec&&id=="Computer"){
	    	cout<<"***YOU LOST***"<<endl;
	    	flag=1;
		}
		else if(boardGame[0][2]==rec&&boardGame[2][2]==rec&&boardGame[4][2]==rec&&id=="Computer"){
	    	cout<<"***YOU LOST***"<<endl;
	    	flag=1;
		}
		else if(boardGame[0][4]==rec&&boardGame[2][4]==rec&&boardGame[4][4]==rec&&id=="Computer"){
	    	cout<<"***YOU LOST***"<<endl;
	    	flag=1;
		}
		else if(boardGame[0][0]==rec&&boardGame[2][2]==rec&&boardGame[4][4]==rec&&id=="Computer"){
	    	cout<<"***YOU LOST***"<<endl;
	    	flag=1;
		}
		else if(boardGame[0][4]==rec&&boardGame[2][2]==rec&&boardGame[4][0]==rec&&id=="Computer"){
	    	cout<<"***YOU LOST***"<<endl;
	    	flag=1;
		}
	}

	void isValid(string boardGame[5][5],string rec,string id){
		int temp;
		for (int i = 0; i < 5; i++){
	        for (int j = 0; j < 5; j++){
	        	if(boardGame[i][j]==rec){
	        		cout<<i<<" "<<j<<endl;
				}
	        }
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
				if(boardGame[0][0]=="X"||boardGame[0][0]=="O"){
					tryAgain(boardGame,user,id);
				}else{
					boardGame[0][0]=rec;		
				}
			break;
			case 2:
				if(boardGame[0][2]=="X"||boardGame[0][2]=="O"){
					tryAgain(boardGame,user,id);
				}else{
					boardGame[0][2]=rec;
				}
			break;
			case 3:
				if(boardGame[0][4]=="X"||boardGame[0][4]=="O"){
					tryAgain(boardGame,user,id);
				}else{
					boardGame[0][4]=rec;
				}
			break;
			case 4:
				if(boardGame[2][0]=="X"||boardGame[2][0]=="O"){
					tryAgain(boardGame,user,id);
				}else{
					boardGame[2][0]=rec;
				}
			break;
			case 5:
				if(boardGame[2][2]=="X"||boardGame[2][2]=="O"){
					tryAgain(boardGame,user,id);
				}else{
					boardGame[2][2]=rec;
				}
			break;
			case 6:
				if(boardGame[2][4]=="X"||boardGame[2][4]=="O"){
					tryAgain(boardGame,user,id);
				}else{
					boardGame[2][4]=rec;
				}
			break;
			case 7:
				if(boardGame[4][0]=="X"||boardGame[4][0]=="O"){
					tryAgain(boardGame,user,id);
				}else{
					boardGame[4][0]=rec;
				}
			break;
			case 8:
				if(boardGame[4][2]=="X"||boardGame[4][2]=="O"){
					tryAgain(boardGame,user,id);
				}else{
					boardGame[4][2]=rec;
				}
			break;
			case 9:
				if(boardGame[4][4]=="X"||boardGame[4][4]=="O"){
					tryAgain(boardGame,user,id);
				}else{
					boardGame[4][4]=rec;
				}
			break;	
			default :
				cout<<"Your input is wrong!";
			break;
		}
		
		isFinished(boardGame,rec,id);
		
	//	isValid(boardGame,rec,id);
		
	}
	
	void tryAgain(string boardGame[5][5],int user,string id){
		if(id=="Human"){
			cout<<"Your input is not valid TRY AGAIN"<<endl;
			cout<<"please Enter Your Position (1-9) : ";
			cin>>user;
			inputUser(boardGame,user,"Human");
		}
		else if(id=="Computer"){
	    	computer=(rand() % 9 + 1);
	    	inputUser(boardGame,computer,"Computer");
		}	
	}
	
	
	
