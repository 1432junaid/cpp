#include<iostream>
using namespace std;

int main(){
//	enum e_name{sun,mon,tue,wed,thu,fri,sat};
//	cout<<sun<<endl;

//	enum ename2{sat=6,sun};
//	cout<<sun<<endl;

	enum days{sun=2,mod=1,tue=1,wed=1,thu=1,fri=1,sat=2};
	cout<<sun<<endl;

	enum owl{x=6,y};


//	days wed=sun;
	days wed=x;
//	days wed=2;
	cout<<sun<<endl;

	return 0;
}
