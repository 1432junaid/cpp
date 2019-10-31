#include<iostream>
using namespace std;
class myclass{
	public:
	static void printer(){
		cout<<"printer of my class"<<endl;
	}
};

int main(){
	myclass::printer();
	return 0;
}
