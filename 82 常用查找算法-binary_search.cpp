#include<algorithm>
#include<vector>
#include<iostream>
using namespace std;

/* 
 * binary_search()
 * 查找元素在类中是否存在 
 * 返回一个bool值 
 * 必须在有序序列中使用 
 */

int main() {
	vector<int> v;
	v.push_back(0);
	v.push_back(1);
	v.push_back(3);
	v.push_back(6);
	v.push_back(11);
	v.push_back(23);
	v.push_back(33);
	v.push_back(56);
	v.push_back(89);
	v.push_back(100);
	
	bool flag = binary_search(v.begin(), v.end(), 33);
	
	cout<< (flag? "Yes": "No")<<endl;
	
	return 0;
}
