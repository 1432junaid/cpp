#include<iostream>
using namespace std;
int main(){
/*	const int x = 20;
	int y = 40;
	int *p = &y;
	const int *q = &y;
	int *const k = &y;
	const int *const m =  &x;

//	*p =50;			//no error
//	*q = 50;		//error
//	*k = 60;		//no error;
//	*k = &x;		//error
//	*m = 75;		//error
//	m = &x;			//error

	const int a=20;
	int b = 20;
	const int *p = a;
	const int *q = &b;
	int *t = &a;
*/
	int x =10;
	const int y =20;
	int  &ref =x;
//	int &ref2 = y;				//error
//	const int &ref3 = y;
//	const int &ref4 = x;
//	ref3 = 50;				//error
//	ref4 = 60;				//error
//	ref = 40;
//	ref2 = 40;				//error

	return 0;
}
