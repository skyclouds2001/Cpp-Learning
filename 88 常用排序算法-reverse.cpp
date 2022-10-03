#include<iostream>
#include<algorithm>
#include<vector>
#include<functional>
using namespace std;

/* 
 * reverse() 
 * 反转容器内元素 
 * 
 * 
 */

void print(int v) {
	cout<< v<< " ";
}

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
	
	reverse(v1.begin(), v1.end());
	
	for_each(v1.begin(), v1.end(), print);
	
	return 0;
}
 
