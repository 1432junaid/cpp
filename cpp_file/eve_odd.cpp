#include<iostream>
using namespace std;
int main(){
	int a;
	cout<<"Enter a number"<<endl;
	cin>>a;
	if(a&1==1){
		cout<<"odd"<<endl;
	}else{
		cout<<"even"<<endl;
	}
	return 0;
}
