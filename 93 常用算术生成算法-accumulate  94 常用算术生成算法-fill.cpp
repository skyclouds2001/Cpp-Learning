#include<iostream>
#include<algorithm>
#include<functional>
#include<vector>
#include<numeric> 
using namespace std;

/* 算术生成算法 
 * accumulate() 给定区域内求和方法 
 * fill() 填充指定区域内为确定数值 
 * 
 * 
 */

void print(int x) {
	cout<< x<< endl;
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
	
	cout<< accumulate(v.begin(), v.end(), 0)<< endl;
	
	fill(v.begin(), v.end(), 100);
	for_each(v.begin(), v.end(), print);
	
	return 0;
}
