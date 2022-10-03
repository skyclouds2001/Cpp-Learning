#include<iostream>
#include<functional> 
#include<algorithm>
#include<vector>
using namespace std;

//	Âß¼­·Âº¯Êý  
//	logical_and
//	logical_or
//	logical_not

int main() {
	
	vector<bool> v, vp;
	for(int i = 0; i < 10; ++i) {
		v.push_back((i % 2 == 0)?true:false);
	}
	
	vp.resize(v.size()); ////////*****************************
	for(vector<bool>::iterator it = v.begin(); it != v.end(); ++it) {
		cout<< *it<< " ";
		transform(v.begin(),v.end(),vp.begin(),logical_not<bool>());
	}
	cout<<endl;
	for(vector<bool>::iterator it = vp.begin(); it != vp.end(); ++it) {
		cout<< *it<< " ";
	}
	
	return 0;
} 
