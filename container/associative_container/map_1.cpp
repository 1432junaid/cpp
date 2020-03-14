#include<map>
#include<iostream>
#include<string>
using namespace std;
int main(){
	map<int,string>m1;
//	map<int,string>m2(m);
	m1[1] = "Lucknow";
	m1[2] = "lanpur";
	m1[1] = "kanpur";
	m1[10] = "junaid";

//	map<int,stirng>m1(b,e);
	map<int,string>::iterator itr = m1.begin();
	map<int,string>::iterator itr2 = m1.end();
//	for(;itr!=itr2;itr++){
//		cout<< itr->first <<enld;
//		cout<< itr->second <<endl;
//	}

	cout<<itr<<endl;
	cout<<m1[1]<<endl;
	cout<<m1[2]<<endl;
	cout<<m1[9]<<endl;
	return 0;
}
