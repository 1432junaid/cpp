#include<iostream>
using namespace std;
int main(){
	char x = 'A';
	wchar_t y = L'A';
	bool s;//=false;
	cout<<x<<" "<<y<<endl;
	cout<<char(y)<<endl;
	s=0;
	cout<<int(s)<<endl<<endl;

	int a = 23;
	int b = 023;
	int c = 0x23;
	float d = 3.2f;
	cout<<a<<endl;
	cout<<b<<endl;
	cout<<c<<endl;
	cout<<d<<endl;


	enum days{sun,mon,tue=0,wed,thr,fri,sat};
//	int x= 2;
	{
	enum{jan=1,feb,mar,apr,may,jun,jul,aug,sep,oct,now,dec}
	}
	cout<<days::mon<<endl;
	cout<<days::wed<<endl;
//	int x=5;
//	cout<<x<<endl;


	return 0;
}
