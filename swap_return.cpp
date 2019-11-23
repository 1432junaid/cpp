#include<iostream>
using namespace std;
int * datasender(int x, int y, int z){
	int *a = new int[3];
	a[0] = x+y;
	a[1] = y+z;
	a[2] = z+x;
	return a;
}

int main(){
	int a=10, b=20,c=30;
	int *p = datasender(a,b,c);
	for(int i=0;i<3;i++){
		cout<<p[i]<<endl;
	}
	return 0;
}
