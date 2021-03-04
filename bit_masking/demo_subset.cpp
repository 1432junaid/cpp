#include <iostream>

using namespace std;

int main(){
	int arr[] = {1,2,3};
	cout << arr[0]<< " "  << arr[1] << " " << arr[2] << endl;

	int len =  sizeof(arr)/sizeof(arr[0]);
	int t_set = 1<<len;

	for(int i = 0; i < t_set; i++){
		for(int j = 0; j < len; j++){
			if( (i&(j<<1)) != 0) {
				cout << j << " ";
			}
		}
		cout << endl;
	}
	return 0;
}
