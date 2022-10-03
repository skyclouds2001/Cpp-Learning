#include<iostream>
#include<algorithm>
#include<functional>
#include<vector>
using namespace std;

/* 
 * set_intersection() 并集 
 * set_union() 交集 
 * set_difference() 
 * 原容器需是有序序列 
 * 需预先开辟空间
 * 返回指向最后一个元素的迭代器 
 */

void print(int x) {
	cout<< x<< " ";
}

int main() {
	vector<int> v;
	v.push_back(0);
	v.push_back(1);
	v.push_back(0);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(3);
	v.push_back(0);
	v.push_back(2);
	v.push_back(1);
	
	vector<int> v0;
	v0.push_back(6);
	v0.push_back(9);
	v0.push_back(5);
	v0.push_back(2);
	v0.push_back(3);
	v0.push_back(4);
	v0.push_back(3);
	v0.push_back(7);
	v0.push_back(2);
	v0.push_back(8);
	
	vector<int> v1, v2, v3;
	v1.resize(v.size() + v0.size());
	v2.resize(min(v.size(), v0.size()));
	v3.resize(max(v.size(), v0.size()));
	vector<int>::iterator v1end = set_intersection(v.begin(), v.end(), v0.begin(), v0.end(), v1.begin());
	vector<int>::iterator v2end = set_union(v.begin(), v.end(), v0.begin(), v0.end(), v2.begin());
	vector<int>::iterator v3end = set_difference(v.begin(), v.end(), v0.begin(), v0.end(), v3.begin());
	
	for_each(v1.begin(), v1end, print);		cout<<endl;
	for_each(v2.begin(), v2end, print);		cout<<endl;
	for_each(v3.begin(), v3end, print);		cout<<endl;
	
	return 0;
}
