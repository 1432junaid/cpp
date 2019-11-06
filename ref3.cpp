#include<iostream>
using namespace std;
int main(){
	int x=10;
	const int y=20;
//	int &a=x;
	const int &a=x;
	const int &b=y;

//	const int &const c =x;
//	const int &const d=y;
//	int &c =y;
//	const int &d=x;     error;
	cout<<a<<endl;
	cout<<b<<endl;
//	cout<<c<<endl;
//	cout<<d<<endl;
	return 0;
}
