#include<iostream>
#include<string>
#include<cctype>		//to use char functions like isalpha,isalnum,islower,idnumber,isdigit,isxnumber,isgrap,isascii,toupper

using namespace std;
//using std::string;
//using std::string::size_type;


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
	cout<<b<<endl<<endl<<endl;
//	for(string::size_type i=0; i<s2.size;i++){
//		cout<<s2[i]<<endl;
//	}

	string collage("Integral");
	for(string::size_type i=0;i<collage.size();i++){   //intilize i with int 
		cout<<collage[i]<<endl;
	}

	string s5("ab3cde");
	for(string::size_type i=0;i<s5.size();i++){
		if(isalpha(s5[i])){
			s5[i]=toupper(s5[i]);
		}
	}
	cout<<s5<<endl;


	return 0;
}
