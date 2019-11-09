#include<iostream>
using namespace std;
class info{
	int age;
	char name[100];
	public:
	void get_data(int x){
		age=x;
	}

	void put_data();
}p1;
void info::get_data(){
	cout<<"enter name"<<endl;
	cin>>name;
	cout<<"enter age"<<endl;
	cin>>age;
}
void putdata(){
	cout<<"name"<<name<<endl;
	cout<<"age"<<age<<endl;
}



int main(){
	p1.getdata();
	p1.putdata();

	return 0;
}
