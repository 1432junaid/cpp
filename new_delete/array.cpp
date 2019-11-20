#include<iostream>
using namespace std;
int main(){
	int *p = new int[5];
	p[0]=5;
	p[1]=10;
//	p=new int[10];

	for(int i=0;i<5;i++){
		cout<<p[i]<<endl;
	}


}
