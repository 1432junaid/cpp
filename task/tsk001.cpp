#include<iostream>
using namespace std;

class Emp{
	int salary;
	public:
	void set_salary(int x){
		salary=x;
	}
	void increment();
};

void Emp::increment(){
	int per;
	cout<<"Enter percent to be increased"<<endl;
	cin>>per;
	salary = (salary*(100+per))/100;
	cout<<"increment salary is :"<<salary<<endl;
}


int main(){
	int option,salary;
	Emp *e;
	while(1){
		cout<<"1.New "<<endl;
		cout<<"2.Exit"<<endl;
		cin>>option;
		switch(option){
			case 1:
				e = new Emp();
				cout<<"Enter salary"<<endl;
				cin>>salary;
				e->set_salary(salary);
				e->increment();
			break;

			case 2:
				exit(0);
			break;

			default:
				cout<<"Wrong option"<<endl;
		}
	}
	return 0;
}


