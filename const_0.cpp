#include<iostream>
#include<cstdio>
using namespace std;
class myclass{
	public:
	int x;
	const int y;
	myclass():x(10),y(20){}
};

int main(){
	myclass m1;
	cout<<m1.x<<endl;
	cout<<m1.y<<endl;
	m1.x=50;
//	m2.y=39;
	printf("%d",m1.x);
	return 0;
}
