#include<string>
#include<vector>
#include<iostream>
using namespace std;
int main(){
	pair<int,int>p;
	pair<int,string>p1;
	pair<string,vector<string> >p2;
	pair<int,string>pr(2,"junaid");
	cout<<pr.first<<endl;
	cout<<pr.second<<endl;
//	p(12,13);
	cout<<p.first<<endl;
	cout<<p.second<<endl;
	pair<int,string>pa(pr);
	cout<<pa.first<<endl;
	cout<<pa.first<<endl;
	p = make_pair(13,4);
	cout<<p.second<<endl;
	cout<<endl;
	pair<int,int>p3(12,11);
	cout<< (p > p3) <<endl;
	cout<< (p==p3) <<endl;
	return 0;
}
