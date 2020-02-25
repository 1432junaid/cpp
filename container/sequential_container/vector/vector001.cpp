#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
	vector<int>v;
	vector<int>v2(10);
	vector<string>vs;
	vector<string>vs2(5,"Lucknow");
	size_t st = vs2.size();
	for(size_t t=0; t < vs2.size(); t++){
		cout<<vs2[t]<<endl;
	}
	for(int i=0;i<10; i++){
		v.push_back(i+2);
	}
	for(int i = 0; i < v.size(); i++){
		cout<<v[i]<<endl;
	}
//	iterator used to get the address of beginning pointer and 
	for(int i = v.begin(); i<v.end(); itr++){
		cout<<*itr<<endl;
	}
//	size_t vs2 = v2.size();
//	cout<<vs2<<endl;
	return 0;
}
