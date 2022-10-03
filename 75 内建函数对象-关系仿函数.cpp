#include<iostream>
#include<functional> 
#include<algorithm>
#include<vector>
using namespace std;

//	¹ØÏµ·Âº¯Êý  

template<typename T>
class Greater{
	public:
		bool operator() (T v1, T v2) {
			return v1 > v2;
		} 
};


int main() {
	
//	equal_to
//	not_equal_to
//	greater
//	greater_equal
//	less
//	less_equal

	vector<int> v;
	for(int i = 0; i < 10; ++i) {
		v.push_back(i * i * i - 3 * i * i + 2);
	}
//	sort(v.begin(), v.end(), Greater<int>());
//	for(vector<int>::iterator it = v.begin(); it != v.end(); ++it) {
//		cout<< *it<< " ";
//	}
//	cout<<endl;
	sort(v.begin(), v.end(), greater_equal<int>());
	for(vector<int>::iterator it = v.begin(); it != v.end(); ++it) {
		cout<< *it<< " ";
	}
	cout<<endl;
	
	return 0;
} 
