#include<set>
#include<iostream>
#include<vector>
using namespace std;
int main(){
	set<int>st;
	st.insert(10);
	st.insert(40);
	st.insert(10);
	st.insert(30);
	st.insert(50);
	set<int>::iterator it = st.begin();
	while(it != st.end()){
		cout<<*it<<endl;
		++it;
	}

	vector<int>v;
	for(int i=0;i<10;i++){
		v.push_back(i);
		v.push_back(i);
	}
	cout<<v.size()<<endl;
	vector<int>::iterator itr = v.begin();
	vector<int>:: iterator itr2 =v.end();
	set<int>st2(itr,itr2);
	cout<<"size of st2 ="<<st2.size()<<endl;

	return 0;
}
