#include<iostream>
#include<bitset>
#include<cstring>
using namespace std;
int main(){
	bitset<10> b;
	unsigned int x =20;
	bitset<20>b1(x);
	bitset<20>b2("10101010");
//	cout<<b<<endl;
	string s("1010110");
	bitset<32>b3(s,1,4);
	
	cout<<b3<<endl;
//	cout<<b1<<endl;
//	cout<<b2<<endl;
//	test(1)<<endl;
	return 0;
}
