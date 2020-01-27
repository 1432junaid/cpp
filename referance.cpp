#include<iostream>
using namespace std;
/*void swap(int &a,int &b){
	int temp =a;
	a = b;
	b = temp;
}
int main(){
	int x = 10,y = 20;
	int &refx =x, &refy = y;
	swap(refx, refy);
	cout<<x<<"  " <<y<<endl;
	return 0;
}
*/
int main(){
//	int y =20;
	int &refy = y;
//	y=50;
	cout <<y<<endl;
	cout<<refy<<endl;
	return 0;
}
