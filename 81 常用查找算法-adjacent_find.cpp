#include<algorithm>
#include<iostream>
#include<vector>
using namespace std;

/* 
 * adjacent_find()
 * �������ڵ��ظ�Ԫ�� 
 * ���ҵ�����ָ���һ��Ԫ�صĵ�����
 * ���򷵻�ָ��endλ�õĵ����� 
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
