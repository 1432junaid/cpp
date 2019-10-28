#include<iostream>
using namespace std;
class myclass{
	int age;
	public:
	friend void set_age(int x);
	friend int get_age();
}m;

void set_age(int x){
	m.age=x;
}
int get_age(){
	return m.age;
}

int main(){
	set_age(30);
	cout<<get_age()<<endl;
	return 0;
}
