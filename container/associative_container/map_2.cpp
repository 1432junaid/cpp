#include<map>
#include<iostream>
#include<string>
using namespace std;
int main(){
	map<int,int>marks;
	marks[10] = 350;
	marks.insert(make_pair(11,450));
	int c = marks[10];
	cout<<c<<endl<<endl;
	marks.erase(10);
	cout<<marks[10]<<"hello"<<endl;

/*
	map<int,int>::iterator itr = marks.begin();
	for(;itr != marks.end();itr++){
		cout<<itr -> first <<endl;
		cout<<itr -> second <<endl;
	}
*/
//	cout<<endl<<endl;
	marks[12] = 350;
	map<int,int>::iterator itr1;
	itr1 = marks.find(11);
	if(itr1 != marks.end()){
		cout<< itr1 -> first<<endl;
		cout<< itr1 -> second<<endl;
	}
	cout<< marks.count(10)<<endl;

	map<int,int>::iterator itr2;
	for(itr2.begin(); itr2.end(); itr2++){
		marks.erase(itr2);
	}

	return 0;
}
