#include<iostream>
using namespace std;

class myclass{
	int x;
	float y;
	public:
	myclass(int a,float b){x=a;y=b;}

	void printer(){
		cout<<x<<endl;
		cout<<y<<endl;
	}

	~myclass(){
		cout<<"destructor called";
		cout<<x<<endl;
		cout<<y<<endl;
	}




}m1(5,8.9);

int main(){
	myclass m2(10,2.5);
	myclass *m3 = new myclass(15,3.7);
	m1.printer();
	m2.printer();
	m3->printer();
	delete(m3);
	return 0;
}
