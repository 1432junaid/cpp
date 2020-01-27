#include<iostream>
using namespace std;
/*
class scope{
	int x;
	public:
	void printer(){
		int x=10;
		cout<<x<<endl;
//		::x = 50;
//		cout<<::x<<endl;
	}
};

int main(){
	scope s;
	s.printer();
	return 0;
}
*/
/*
int x;
int main(){
	cout<<x<<endl;
	int x = 20;
	cout<<x<<endl;
	::x = 50;
	cout<<::x<<endl;
	cout<<x<<endl;
	return 0;
}
*/

//int x;
void printer(){
	int x=10;
	static int y = x;
	y++;
	cout<<x<<" " <<y<<endl;
}
int main(){
	printer();
	printer();
	printer();
	return 0;
}
