#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector<int>v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	int i=10;
	for(vector<int>::const_iterator itr=v.begin(); itr!=v.end(); itr++){ //remove to assing the value other it only be use to get 

//		*itr=50;			//use to assign the value

//	for(int i=10:: itr=v.begin();itr!=v.end();itr++){
//		*itr = 50+i;

		cout<<*itr<<endl;		//use to get  the value
//		*itr=50;
		i++;
	}
	return 0;
}
