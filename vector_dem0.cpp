#include<iostream>
#include<vector>
using namespace std;

int main(){
	vector<int>v;
	vector<string>v2(2,"junaid");
	vector<int>v3(10,2);
	vector<int>v4(v3);
	v3[2] = 50;
	v3.push_back(12);
/*	for(int i=0; i<v3.size();i++){
		cout<<v3[i]<<endl;
	}
//	cout<<v3[4];
//	for()
	vector<int>::iterator iter = v3.begin();
	while(iter<v3.end()){
		cout<<*iter<<endl;
		iter++;
	}*/
	vector<string>::iterator iter2 = v2.begin();
	vector<int>::iterator iter2 = v2.begin();

	cout<<*iter2<<endl;


	return 0;
}
