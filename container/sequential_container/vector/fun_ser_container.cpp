#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
	vector<int>v(5,10);
	vector<int>v2(5,1);
/*	v.push_back(22);
//	cout<<v.size();
	size_t size = v1.size();
//	cout<<size<<endl;
	*itr2 += 2;
	v.insert(itr1,80);
	v.insert(itr1,5,10);
//	v.insert()

	for(int i=0; i < v.size; i++){
		cout<<v[i]<<endl;
	}

/*
	for(vector<int>::iterator  i = v.begin();i<v.end(); i++){
		*i+3 = 45;
	}

*/
	vector<int>::iterator itr ;
	vector<int>::iterator itr2 = v2.begin();
	itr2 += 2;
	v2.insert(itr2,v.begin(),v.end());
	itr2 = v2.begin();
	while(itr2 != v2.end()){
		cout<<*itr2<<endl;
	itr2 ++;
	}


	return 0;
}
