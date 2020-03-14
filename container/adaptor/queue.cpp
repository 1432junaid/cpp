#include<queue>
#include<iostream>
using namespace std;
int main(){
	queue<int>q;
/*	cout<<q.empty()<<endl;
	for(int i=0; i<q.size();i++){
		q.push(i+12);
	}
	for(int i=0; i<q.size(); i++){
//		cout<<q.front();
		cout<<q.back();
	}*/
	q.push(12);
	q.push(43);
	q.push(44);
//	cout<<q.back();
//	cout<<q.top();
//	cout<<q.front();
//	cout<<q.size();

	q.pop();
//	cout<<q.top();
	return 0;
}
