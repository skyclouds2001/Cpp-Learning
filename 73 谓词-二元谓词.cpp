#include<iostream>
#include<vector> 
#include<algorithm>
using namespace std;

//	��Ԫν��  

class Greater{
	public:
		bool operator() (int v1, int v2) {
			return v1 > v2;
		} 
};

int main() {
	
	vector<int> v;
	for(int i = 0; i < 10; ++i) {
		v.push_back(i * i * i - 3 * i * i + 2);
	}
	
	sort(v.begin(), v.end());
	for(vector<int>::iterator it = v.begin(); it != v.end(); ++it) {
		cout<< *it<< " ";
	}
	cout<<endl;
	
	//	�������󣨷º������������ 
	sort(v.begin(), v.end(), Greater());
	for(vector<int>::iterator it = v.begin(); it != v.end(); ++it) {
		cout<< *it<< " ";
	}
	cout<<endl;
	
	return 0;
} 
