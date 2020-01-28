#include<iostream>
#include<cstring>
using namespace std;
int main(){
	char *city = "lucknow junction";
	char *c = "lucknow";
	int hash[26]= {0};
	int len = strlen(city);
	for(int i = 0; i<len ; i++){
		if(city[i] >= 97 && city[i] <= 122)
		hash[city[i] - 'a']++;
	}
	for(int i=0; i<26;i++){
		if(hash[i]>0){
			cout<<char(i+'a')<<"  "<<hash[i]<<endl;
		}
	}
//	if(len)

	return 0;
}
