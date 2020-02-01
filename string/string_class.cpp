#include<iostream>
#include<string>
using namespace std;
int main(int argc,char* argv[]){
/*	string s("Lucknow");
	s[4] = 'A';
	string s1(s);
	string s2(5,'A');
	string s3;
//	string s4(2,"hantai");
	cout<<s<<endl;
	cout<<s1<<endl;
	cout<<s2<<endl;
	cout<<s3<<endl;
//	cout<<s4<<endl;
/*
	string str1,str2;
//	cin>>str1;
	cin>>str1>>str2;
	cout<<str1<<endl;
	cout<<str2<<endl;

	string line;
	getline(cin,line);		//take input upto next line function of ios

	cout<<line<<endl;
	cout<<line.size()<<endl;
	cout<<s3.empty()<<endl;
*/

	string s1 = "abc";
	string s2 = "bcde";
	if(s1 == s2)cout<<"true"<<endl;
	if(s1 < s2)cout<<"true"<<endl;
	string s3 = s1+s2;
	string s4 = s1 + "my name is junadi";
//	string s5 = "my name is " + " junaid ";
	string s5 = s1 + "my nae is";
	cout<<s5<<endl;

	return 0;
}
