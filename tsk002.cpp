#include<iostream>
using namespace std;

int main(){
	cout<<"Enter  your choice"<<endl;
	int x;
	cout<<"1=menu"<<endl;
	cout<<"2=exit"<<endl;
	cin<<x;
	switch(x){
		case 1:
		menu();
		break;

		case 2:
		exit();
		break;

		default:
		break;
	}

	return 0;
}

void menu(){
	





