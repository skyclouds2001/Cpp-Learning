#include<iostream>
#include<algorithm>
#include<vector>
#include<functional>
using namespace std;

/* 
 * sort()
 * 排序指定容器元素 
 * sort(Iterator begin, Iterator end, _Pred 谓词/可选)
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
	
	sort(v1.begin(), v1.end());
	
	for_each(v1.begin(), v1.end(), print);
	cout<<endl;
	
	sort(v1.begin(), v1.end(), greater<int>());
	
	for_each(v1.begin(), v1.end(), print);
	cout<<endl;
	
	return 0;
}
 
