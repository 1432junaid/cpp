#include<iostream>
#include<cstring>
using namespace std;

int frequency(char str[], char ch, int frequency){
	int len = strlen(str);
	int count =0,res = 0;
	for(int i=0; i<len;i++){
		if(str[i] == ch)count++;
	}
	if(count == frequency)res == 1;
	cout <<res<<endl;
	return res;
}

int anagram_check(char str1[],char str2[]){
	int len1 = strlen(str1);
	int len2 = strlen(str2);
	if(len1 == 0 && len2 == 0)return 0;
	if(len1 != len2)return 0;
	int count = 0;
	for(int i=0; i<len1 ;i++){
		count = 0;
		for(int j=0; j<len1; j++){
			if(str1[i] == str1[j] && str1[i] !=' '){
				if(j<i)break;
				count++;
			}
		}
		if(count != 0 && frequency(str2,str1[i],count) == 0)return 0;
	}
	return 1;
}

int main(){
	char str1[] = "luck";
	char str2[] = "klcu";
	int result = anagram_check(str1,str2);
	cout<<result<<endl;
//	if(result == 0)cout<<"not a anagram"<<endl;

	return 0;
}
