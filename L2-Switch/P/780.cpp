#include<iostream>
using namespace std;

int main(){
	int input;
	int charge;
	int bill;
	int charity;
	int internet;
	
	cout<<"1.Charge"<<endl;
	cout<<"2.Bill"<<endl;
	cout<<"3.Charity"<<endl;
	cout<<"4.Internet"<<endl;
	cout<<"Enter (1-4) : ";
	cin>>input;
	switch(input){
		case 1:
			cout<<"1.HamrahAval"<<endl;
			cout<<"2.InranCell"<<endl;
			cout<<"3.Ritell"<<endl;
			cout<<"please Enter (1-3) : ";
			cin>>charge;
			switch(charge){
				case 1:
					cout<<"HamrahAval";
				break;
				case 2:
					cout<<"InranCell";
				break;
				case 3:
					cout<<"Ritell";
				break;
				default:
					cout<<"Your input is wrong!";
				break;
			}
		break;
		case 2:
			cout<<"1.Mobile"<<endl;
			cout<<"2.TellPhone"<<endl;
			cout<<"3.Electricity"<<endl;
			cout<<"please Enter (1-3) : ";
			cin>>bill;
			switch(bill){
				case 1:
					cout<<"Mobile";
				break;
				case 2:
					cout<<"TellPhone";
				break;
				case 3:
					cout<<"Electricity";
				break;
				default:
					cout<<"Your input is wrong!";
				break;
			}
		break;
		case 3:
			cout<<"1.ImamAli"<<endl;
			cout<<"2.GolestanAli"<<endl;
			cout<<"3.Mahak"<<endl;
			cout<<"please Enter (1-3) : ";
			cin>>charity;
			switch(charity){
				case 1:
					cout<<"ImamAli";
				break;
				case 2:
					cout<<"GolestanAli";
				break;
				case 3:
					cout<<"Mahak";
				break;
				default:
					cout<<"Your input is wrong!";
				break;
			}
		break;
		case 4:
			cout<<"1.HamrahAval"<<endl;
			cout<<"2.IranCell"<<endl;
			cout<<"3.Shatell"<<endl;
			cout<<"please Enter (1-3) : ";
			cin>>internet;
			switch(internet){
				case 1:
					cout<<"HamrahAval";
				break;
				case 2:
					cout<<"IranCell";
				break;
				case 3:
					cout<<"Shatell";
				break;
				default:
					cout<<"Your input is wrong!";
				break;
			}
		break;
		default: 
			cout<<"Your input is wrong";
		break;
		
	}

	return 0;
}