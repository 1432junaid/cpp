#include<iostream>
using namespace std;
int main(){
	int a[4] = {1,2,3,4};
	int len = sizeof(a)/sizeof(a[0]);
	cout<<len<<endl;
	cout<<a[3]<<endl;
	cout<<*(a+1)<<endl;		//this is l_value
//	cout<<*(c++)<<endl;		//this is R_value
	return 0;
}
