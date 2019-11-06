#include<iostream>
using namespace std;
class myclass{
	public:
	int x;
	int y;
}

void data_chnger(myclass &m1){	//
	m1.x =20;
	m2.y =30;
}

void d_chnger(const myclass &m2){
	m2.x=50;
	m2.y=70;
}

int main(){
	myclass m;
//	data_chnger(m);
	cout<<m.x<<endl;
	cout<<m.y<<endl;
	return 0;
}
