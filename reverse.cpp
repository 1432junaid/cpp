#include<iostream>
using namespace std;

class rev{
	int a;
	public:
	rev(int x){					//	rev(int x){
		a=x;
	}
	int get(){
		return a;
	}

	void fun(){					//	int fun(int data){
		int r=0;
		int data=a;
		while(data){
			r=(r*10)+(data%10);
			data=data/10;
		}
//		return r;
//		cout<<data<<endl;
	}
};

int main(){
	int data;
	cout<<"Enter a number";
	cin>>data;
	rev m1(data);					//	rev m1(data);
	cout<<m1.get()<<endl;				//	int r=m1.fun(m1.get());
							//	cout<<r<<endl;
	return 0;
}
