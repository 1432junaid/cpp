#include<iostream>
using namespace std;
class myclass{
	int data;
	public:
	myclass(int a){
		data=a;
	}
	int getdata(){
		return data;
	}
	void reverse();
};

void myclass::reverse(){
	int a=data,result=0;
	while(a){
		result=(result*10)+(a%10);
		a=a/10;
	}
	data=result;
}

int main(){
	int indata;
	cout<<"Enter data"<<endl;
	cin>>indata;
	myclass *m = new myclass(indata);
	m->reverse();
	cout<<m->getdata()<<endl;
	return 0;
}
