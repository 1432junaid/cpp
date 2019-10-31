#include<iostream>
using namespace std;
class myclass{
	public:
	myclass(){
		cout<<"constructor called"<<endl;
	}
	void printer(){
		cout<<"printer "<<endl;
	}
	~myclass(){
		cout<<"Destructor called"<<endl;
	}
};

void object_creator(){
	myclass m1;
}

int main(){
//	object_creator();
	myclass*m2 = new myclass();
//	m2->printer();
	delete(m2);
//	m2=NULL; 
//	m2->printer();
	return 0;
}
