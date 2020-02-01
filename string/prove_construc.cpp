//when the class object is created then 


#include<iostream>
using namespace std;
class myclass{
	public:
	myclass(){
		cout<<"this is my class constructor"<<endl;
	}
	void m1(){
		cout<<"this is m1 method"<<endl;
	}
};
int main(){
	myclass m;
	m.m1();
	return 0;
}
