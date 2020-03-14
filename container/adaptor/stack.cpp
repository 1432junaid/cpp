#include<stack>
#include<iostream>
using namespace std;
int main(){
	stack<int>st;
	st.push(10);
	st.push(12);
	cout<<st.top()<<endl;
	int a = st.top();
	st.pop();
	cout<<st.top()<<endl;

	for(int i=0; i<10; i++){
		st.push(i+3);
	}
	int s = st.size();
	for(int i=0;i<s;i++){
		cout<<st.top()<<endl;
	}
/*	int s = stack.size();
	for(int i=0;i<s;i++){
		cout<<st.top()<<endl;
		stack.pop();
	}

*/	return 0;
}
