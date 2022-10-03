#include<iostream>
#include<algorithm>
#include<functional>
#include<vector>
using namespace std;

/* 
 * copy()  拷贝容器内容  需要提前开辟空间 
 * replace()  替换指定区域内给定旧元素为新元素 
 * replace_if()  替换指定区域内满足给定条件的旧元素为新元素 
 * swap()  交换两个容器内容 
 */

void print(int x) {
	cout<< x<< " ";
}

class GO {
	public:
		bool operator () (int v) {
			return v < 2;
		}
};

int main() {
	vector<int> v1;
	v1.push_back(0);
	v1.push_back(1);
	v1.push_back(0);
	v1.push_back(2);
	v1.push_back(3);
	v1.push_back(4);
	v1.push_back(3);
	v1.push_back(0);
	v1.push_back(2);
	v1.push_back(1);
	
	cout<< "v1: ";
	for_each(v1.begin(), v1.end(), print);
	cout<<endl;
	
	vector<int> v2;
	v2.resize(v1.size());
	copy(v1.begin(), v1.end(), v2.begin());
	
	cout<< "v2: ";
	for_each(v2.begin(), v2.end(), print);
	cout<<endl;
	
	vector<int> v3;
	v3.resize(v1.size());
	copy(v1.begin(), v1.end(), v3.begin());
	replace(v3.begin(), v3.end(), 0, 10);
	
	cout<< "v3: ";
	for_each(v3.begin(), v3.end(), print);
	cout<<endl;
	
	vector<int> v4;
	v4.resize(v1.size());
	copy(v1.begin(), v1.end(), v4.begin());
	replace_if(v4.begin(), v4.end(), GO(), 99); 
	
	cout<< "v4: ";
	for_each(v4.begin(), v4.end(), print);
	cout<<endl;
	
	swap(v1, v4); 
	
	cout<< "v1: ";
	for_each(v1.begin(), v1.end(), print);
	cout<<endl;
	cout<< "v4: ";
	for_each(v4.begin(), v4.end(), print);
	cout<<endl;
	
	return 0;
}
