#include<iostream>
using namespace std;

int main(){
	int *p = new int;
	int *q = new int();
	cout<<*p<<endl;
	cout<<*q<<endl;
	*p=20;
	*q=50;
	cout << *p<<endl;
	cout<<*q<<endl;

	delete p;
	int *m= new int;
	cout<<*m<<endl;
	cout<<*p<<endl;

	return 0;
}
