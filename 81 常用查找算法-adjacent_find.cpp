#include<algorithm>
#include<iostream>
#include<vector>
using namespace std;

/* 
 * adjacent_find()
 * 查找相邻的重复元素 
 * 查找到返回指向第一个元素的迭代器
 * 否则返回指向end位置的迭代器 
 */

int main() {
	vector<int> v;
	v.push_back(0);
	v.push_back(1);
	v.push_back(0);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(3);
	v.push_back(3);
	v.push_back(2);
	v.push_back(1);
	
	vector<int>::iterator it = adjacent_find(v.begin(), v.end());
	
	cout<< *it<<endl;
	
	return 0;
}
