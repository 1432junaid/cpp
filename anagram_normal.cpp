#include<iostream>
#include<cstring>
using namespace std;
int main(){
	char a[] = "luck";
	char b[] = "kluc";
	int len_a = strlen(a);
	int len_b = strlen(b);
	int count=0;
	cout<<len_a<<endl;
	cout<<len_b<<endl;
	if(len_a == len_b){
		for(int i=0;i<len_a;i++){
			for(int j=0;j<len_b;j++){
				count=0;
				if(a[i] == b[j]){
					b[j]=0;
					a[i] = count++;
				}
			}
		}
		for(int k=0 ;k<len_a;k++){
//			if(a[k] == b[])
		}
	}else{
		cout<<"not a anagram"<<endl;
	}
	return 0;
}
