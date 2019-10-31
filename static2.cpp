#include<iostream>
using namespace std;
class myclass{
	public: 	int x;

	private:	myclass():x(20){}
//	myclass(){}
	static myclass *m;
	public:
	void printer(){
		cout<<"hello, integral"<<endl;
	}
	static myclass* obj_creator(){
		static myclass *m=NULL;
		if(m==NULL){
	//	myclass *m1 =new myclass();
			m=new myclass();
		}
	//	return m1;
		return m;
	}

};

int main(){
//	myclass *m=new myclass();
//	myclass m2;
	myclass *m =myclass::obj_creator();
//	m->printer();
	cout<<m->x<<endl;
	m->x=50;
	myclass *m1 = myclass::obj_creator();
	cout<<m1->x<<endl;
	return 0;
}
