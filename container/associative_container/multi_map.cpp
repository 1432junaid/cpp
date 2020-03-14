#include<map>
#include<iostream>
#include<string>
using namespace std;
int main(){
	multimap<int,int>marks;
	marks.insert(make_pair(10,30));
	marks.insert(make_pair(10,450));
	marks.erase(10);
        multimap<int,int>::iterator itr = marks.begin();
        for(;itr != marks.end();itr++){
                cout<<itr -> first <<endl;
                cout<<itr -> second <<endl;
        }


//	marks.erase(10)
/*

	map<int,int>::iterator itr = marks.begin();
	for(;itr != marks.end();itr++){
		cout<<itr -> first <<endl;
		cout<<itr -> second <<endl;
	}

	cout<<endl<<endl;
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
*/
	return 0;
}
