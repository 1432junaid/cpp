#include<iostream>
#include<vector>
#include<string>
#include<deque>
using namespace std;
int main(){
/*	vector<int>v(10,8);
	vector<int>v2(5,1);
	vector<int>::iterator itr2 = v.begin();
//	vector<int>::iterator itr3 = v.begin();
	while(itr2 != v.end()){
		cout<<*itr2<<endl;
		itr2 ++;
	}
//			deque
        deque<int>d;
//        for(int i=0;i<10;i++){
//              d.front();
//              d.push_back(i+2);
                d.push_front(i+2);
//              d.back();
        }
  //      for(int i=0;i<d.size();i++){
    //            cout<<d[i]<<endl;
      //  }
	// cout<<endl;
      //  cout<<d.front()<<endl;
        //cout<<endl;
   //     cout<<d.back()<<endl;
    //    cout<<d.at(5)<<endl;
     //   cout<<d[2]<<endl;

	cout<<".............................................................................."<<endl;

//	v = v2;
	v.assign(3,7);
	while(itr2 != v.end()){
		cout<<*itr2<<endl;
		itr2 ++;
	}
*/
	vector<int>v(5,2);
	cout<<v.capacity()<<endl;
	v.reserve(6);
	v.push_back(7);
	v.push_back(8);
	cout<<v.capacity()<<endl;
	cout<<v.size()<<endl;
	return 0;
}
