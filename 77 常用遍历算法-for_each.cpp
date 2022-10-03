#include<iostream>
#include<algorithm>
#include<functional>
#include<string>
#include<numeric>
#include<vector>
using namespace std;

/*
	算法头文件： 
	<algorithm>
	<functional>
	<numeric>
*/

//	for_each()		遍历容器 

//	普通函数 
void print1(int x) {
	cout<< x<< " ";
}
//	仿函数 
class print2{
	public:
		operator() (int x) {
			cout<< x<< " ";
		}
};

int main(){
	vector<int> v;
	for(int i = 0; i < 10; ++i)
		v.push_back(i * i + i + 2);
	
	for_each(v.begin(), v.end(), print1);
	for_each(v.begin(), v.end(), print2());
	
	return 0;
} 
