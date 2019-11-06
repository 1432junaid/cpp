#include<iostream>
#include<string>
using namespace std;
//using std::string;

int main(){
	string s1;
	string s2("lucknow");
	string s3=s2;	// Or  string s3="kanpur"
	string s4(5,'k');
	cout<<s1<<endl;
	cout<<s2<<endl;
	cout<<s3<<endl;
	cout<<s4<<endl;
	cout<<s2.size()<<endl;
	cout<<s1.size()<<endl;
	cout<<s1.empty()<<endl;
	s2[0]='t';

	cout<<s2<<endl;
	cout<<(s2<s1)<<endl;
	cout<<(s3==s2)<<endl;
	cout<<(s1<s2)<<endl;
	bool b=(s2>s3);
	cout<<b<<endl;
	return 0;
}
