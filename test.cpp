#include<iostream>
using namespace std;
/*
struct  myclass{
	private:
//	public:
	void printer(){
		cout<< "I am printer"<<endl;
	}
};
*/
class myclass{
	public:
	void printer();
};
void myclass::printer(){
	cout<<"i am printer"<<endl;
}
int main(){
	cout<<"hello"<<endl;
//	printer();
	myclass m1;
	m1.printer();
	return 0;
}
