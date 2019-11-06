#include<iostream>
#include<cstdio>
using namespace std;
class employ{
	public:
	int x;
	void get_salry(int y){
		y=x;
	}
	void show_salry(){
		cout<<"salary="<<y<<endl;
	}
}e;

class emp_sal{
	public:
	int x;

}



int main(){
	printf("Enter you choice\n");
	char a;
	switch(a){
		case 1:
		employ();
		break;

		case 2:
		//exit();
		return 0;
	}
	return 0;
}

