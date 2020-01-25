#include<iostream>
//#include<cstdio>
using namespace std;
class myclass{
	public:
	int population;
	char *state;
};

int main(int argc, char*argv[]){
	myclass *b = new myclass;
	b->population = 5000;
	b->state = "bihar";
	myclass *u = new myclass;
	u->population = 5600;
	u->state = "uttar pradesh";
	cout<< b->state<<endl;
	cout<< b->population<<endl;
	cout<< u->state<<endl;
	cout<< u->population<<endl;
	printf("hello");
	return 0;

}
