#include<iostream>
#include<algorithm>
#include<vector>
#include<functional>
using namespace std;

/* 
 * merge(v1.begin(), v1.end(), v2.begin(), v2.end(), v.begin())
 * �ϲ����� 
 * Ŀ����������ǰ���ٿռ� 
 * 
 */

void print(int v) {
	cout<< v<< " ";
}

int main() {
	vector<int> v1;
	v1.push_back(0);
	v1.push_back(1);
	v1.push_back(2);
	v1.push_back(3);
	v1.push_back(4);
	
	vector<int> v2;
	v2.push_back(-1);
	v2.push_back(-2);
	v2.push_back(-3);
	v2.push_back(-4);
	v2.push_back(-5);
	
	vector<int> v;
	v.resize(v1.size() + v2.size()); // ��Ҫָ���ռ� 
	
	merge(v1.begin(), v1.end(), v2.begin(), v2.end(), v.begin());
	
	for_each(v.begin(), v.end(), print);
	
	return 0;
}
 
