#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class sol{
	public:
	vector<vector<int> > subsets(vecetor<int> & v){
		int len = v.size();
		int total_num = 1<<len;
		vector<vector<int>> result;
		for(int i = 0; i<total_num; i++){
			vector<int> temp;
			for(int j = 0; j<len; j++){
				if( (i&(1<<j) )!= 0 ) temp.push_back(v[j]);
			}
			result.push_back(temp);
		}
		return result;
	}
};

int main(){
	vector<int> v={1,2,3};
	sol m;
	auto result = m.subsets(v);
	for(auto x:result){
		cout << "{";
		for(int i : x){
			cout << i << " , ";
		}
		cout << "}" << endl;
	}
	return 0;
}
