#include<iostream>
using namespace std;
class myclass(){
	public:
	myclass(){
		cout<<"this is constructor"<<endl;
	}
	myclass(int a,int b){
		a=10;
		b=30;
	}

}m1,m2;

int main(){
//	myclass m1,m2;
	cout<<m1.myclass()<<endl;
	cout<<m2.myclass(10,20)<<endl;
	return 0;
}
