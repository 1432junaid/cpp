#include<iostream>
#include<vector>
using namespace std;

int main(){
	vector<int>v;
	vector<string>vs(10,"lko");
	vector<string>v2=vs;
//	vector<int>v3=vs;			//error
	for(vector<string>::size_type i=0; i<vs.size();i++){
		cout<<vs[i]<<endl;
	}
	return 0;
}


