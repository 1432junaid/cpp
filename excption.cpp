#include<iostream>
using namespace std;
int main(){
	int x,y,z;
	cout<<"Enter a number"<<endl;
	cin>>x;
	cout<<"Enter a number"<<endl;
	cin>>y;
	try{
		if(y==0)throw new exception();
	}catch(exception *e){
		e->what();
		cout<<"Enter value other the 0"<<endl;
		cin>>y;
		z=x/y;
	}

	cout<<z<<endl;
	return 0;
}

