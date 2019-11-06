#include<iostream>
using namespace std;
int main(){
	int x=20;
	int &y=x;
//	int &y;   error
//	y=x;	  error
	y=40;
	cout<<x<<endl;
	return 0;
}
