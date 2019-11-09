#include<iostream>
using namespace std;
int main(){
	int a;
	cout<<"enter a number"<<endl;
	cin>>a;
	facto(a);
	cout<<"factorial"<<a<<endl;
	return 0;
}
int facto(int x){
	while(x){
		x=x*facto(x-1);
	}
	return x;
}
