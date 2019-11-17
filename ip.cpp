#include<iostream>
#include<bitset>

using namespace std;

int main(){
	string s("11000000101010000010000000100100");
	bitset<32>ip(s);

	string s2("1111111111111111111111100000000");
	bitset<32>subnet(s2);

	bitset<32>netid;

	for(int i=0; i<ip.size(); i++){
		netid[i]=ip[i] & subnet[i];
	}

	for(int i=netid.size()-1; i>=0; i--){
		cout<<netid[i];
	}
	cout<<endl;

	return 0;
}
