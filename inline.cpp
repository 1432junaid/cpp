#include<iostream>
using namespace std;
class myclass{
	int age;
	public:
	void set_age(int x);
	int get_age();
};

inline void myclass::set_age(int x){
	age=x;
}

inline int myclass::get_age(){
	return age;
}

int main(){
	myclass m1,m2;
	m1.set_age(22);
	m2.set_age(23);
	cout<<m1.get_age()<<endl;
	cout<<m2.get_age()<<endl;
	return 0;
}
