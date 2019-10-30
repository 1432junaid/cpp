#include<iostream>
using namespace std;
class myclass{
	int age;
	char *name;
	public:
	myclass():age(21),name("jd"){}
	myclass(int x,char*y){
		age =x;
		name=y;
	}
	void printer(){
		cout<<age<<endl;
		cout<<name<<endl;
	}
};

int main(){
	myclass *m1=new myclass();
	myclass *m2=new myclass(25,"adil");
	m1->printer();
	m2->printer();
	return 0;
}
