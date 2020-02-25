#include<iostream>
#include<bitset>
using namespace std;

int main(){
	bitset<32> b;
	bitset<16> b2;
	cout<<b<<endl;
	cout<<b2<<endl;
	bitset<32>b3(101100111);
	bitset<4>b4(1011101);
	string s("10101011");
	bitset<32>b5(s);
	unsigned long x=32UL;
	bitset<32>b6(x);



	cout<<b3<<endl;
	cout<<b4<<endl;
	cout<<b5<<endl;
	cout<<b6<<endl;

	cout<<b5.size()<<endl;
	bitset<32>b11(20);
	cout<<b11.count()<<endl<<endl;

	bitset<32>n(55);

	cout<<b.count()<<endl;					//count no of  1's

	cout<<b2.set()<<endl;					//put 1's at all places

	cout<<b2.reset()<<endl;					//put 0 at all places

	cout<<b2.set(3)<<endl;					//put 1 at a particular position

	cout<<b2.reset(3)<<endl;				//put 0 at a particular positon

	cout<<b3.flip()<<endl;					//flip whole bits

	cout<<b3.flip(5)<<endl<<endl;				//flip at aposition

	cout<<"any b="<<b.any()<<endl;				//retur 1 when any 1's is exixts
	cout<<"none b="<<b.none()<<endl;			//return 1 when no 1's
	cout<<"test at pos b5="<<b5.test(4)<<endl;		//test 1 at the position
	cout<<"to_u_long b5="<<b5.to_ulong()<<endl;



//	for(int i=0; i<b3.size(); i++){
//		cout<<b3[i]<<endl;
//	}
	return 0;
}

