#include<algorithm>
#include<vector>
#include<iostream>
using namespace std;

/* 
 * binary_search()
 * ����Ԫ���������Ƿ���� 
 * ����һ��boolֵ 
 * ����������������ʹ�� 
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
