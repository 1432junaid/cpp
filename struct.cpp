#include<iostream>
using namespace std;

class state{
	public:
	int population;
	char *statename;
	state(int x){
		population = x;
	}
}bihar(8000);

int main(){
	state assam(2000);
	class state mizoram(6000);
	state * up= new state(3000);
	bihar.population=3000;
	bihar.statename="Bihar";
	up->population=2500;
	up->statename="uttar pradesh";
	cout<<bihar.population<<endl;
	cout<<up->population<<endl;
	return 0;
}
