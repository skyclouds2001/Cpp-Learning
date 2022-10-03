#include<iostream>
#include<algorithm>
#include<vector>
#include<functional>
#include<ctime> 
using namespace std;

/* 
 * random_shuffle()
 * 随机打乱元素顺序 
 * 需加随机数种子 
 * 
 */

void print(int v) {
	cout<< v<< " ";
}

int main() {
	srand((unsigned int)time(NULL));
	
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
	
	random_shuffle(v1.begin(), v1.end());
	
	for_each(v1.begin(), v1.end(), print);
	cout<<endl;
	
	return 0;
}
 
