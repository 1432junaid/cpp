#include <iostream>
#include <string>

using namespace std;

int main(){
	string s("Lucknow") ;
	cout << s.capacity() << endl;
	cout << s.size() << endl;
	s.insert(0,"Lucknow");
	cout << s.length() << endl;
	cout << s.size() << endl;
	string :: iterator itr = s.begin();
	while(itr != s.end()){
		cout << *itr << endl;
		toupper(*itr);
		itr++;
	}
	return 0;
}
