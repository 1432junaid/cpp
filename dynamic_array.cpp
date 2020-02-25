#include<iostream>
using namespace std;
int main(){
	int *pa = new int[5];
	int *qa = new int[5]();
	for(int i=0;i<5;i++){
		cout<<*pa<<endl;
	}
	string *sa = new string[5];
	for(int j=0;j<5;j++){
		cout<<*sa<<endl;
	}
	return 0;
}
