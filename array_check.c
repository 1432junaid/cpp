#include<stdio.h>
//using namespace std;
int main(){
	int a[4] = {1,2,3,4,5,6};
	int len = sizeof(a)/sizeof(a[0]);
//	cout<<len<<endl;
	printf("%d\n",len);
	printf("%d\n",a[2]);
	return 0;
}
