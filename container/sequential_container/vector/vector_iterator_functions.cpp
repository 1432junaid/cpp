#include<iostream>
#include<vector>
#include<string>
#include<list>
using namespace std;
int main(){
	vector<int>v;
	vector<int>v2(10);
	for(int i = 0; i < 10; i++){
		v.push_back(i+2);
	}
	for(int i =0; i < v.size(); i++){
		cout<<v[i]<<endl;
	}

	return 0;
}
