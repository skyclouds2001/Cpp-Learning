#include<iostream>
#include<vector> 
#include<algorithm>
using namespace std;

//	返回bool类型的仿函数    谓词
//	一元谓词  

class Great{
	public:
		bool operator() (int v) {
			return v > 5;
		}
};

int main() {
	
	vector<int> v;
	for(int i = 0; i < 10; ++i) {
		v.push_back(i * i * i - 3 * i * i + 2);
	}
	
	//	find_if()返回一个指向已找到数据的迭代器  
	vector<int>::iterator it = find_if(v.begin(), v.end(), Great());
	
	if(it == v.end())
		cout<< "Unfound"<<endl;
	else
		cout<< "Found"<<endl;
	
	// system("pause");
	
	return 0;
} 
