#include<iostream>
using namespace std;
int main(){
	char s[] = "LUCKnoW";
//	cout<<"Enter string"<<endl;
	int len = sizeof(s);
	for(int i=0; i<len; i++){
//		cin>>s[i];
//		int b=1;
//		s[i] = s[i]^(1<<5);		//capital to small and small to capital
//		s[i] = s[i]|(1<<5);		//capital to small if small then no change
		int a = s[i];
		s[i] = s[i]^(1<<5);
		s[i] = s[i]&a;
	}
	cout<<s<<endl;
	return 0;

}
