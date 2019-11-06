#include<cstdio>
#include<iostream>
using namespace std;

class myclass{
	public:
	int x;
	const int y;
	myclass():x(10),y(20){}
	void incre1(int p){
	//	*p=*p+1;
		p++;
	}
	void incre2(int p)const{
	//	*p=*p+1;
		p++;
	}
};

int main(){
	myclass m1;
	m1.incre1(&(m1.x));
	cout<<m1.x<<endl;
	m1.incre2(&(m1.x));
	cout<<m1.x<<endl;
	return 0;
}
