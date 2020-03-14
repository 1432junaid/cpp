#include<iostream>
#include<deque>
using namespace std;
int main(){
	deque<int>d;
	for(int i=0;i<10;i++){
//		d.front();
//		d.push_back(i+2);
		d.push_front(i+2);
//		d.back();
	}
	for(int i=0;i<d.size();i++){
		cout<<d[i]<<endl;
	}
/*	cout<<endl;
	cout<<d.front()<<endl;
	//cout<<endl;
	cout<<d.back()<<endl;
	cout<<d.at(5)<<endl;
	cout<<d9[2]<<endl;
*/

	return 0;
}
