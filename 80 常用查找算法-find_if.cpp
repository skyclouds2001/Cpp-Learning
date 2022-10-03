#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

//	find_if()	返回一个指向满足查找元素要求的迭代器iterator 

class S{
	public:
		bool operator() (int x){
			return x > 100;
		}
}; 

int main(){
	
	vector<int> v;
	for(int i = 0; i < 100; ++i)
		v.push_back(i * i);
	
	vector<int>::iterator it = find_if(v.begin(), v.end(), S());
	cout<< *it<<endl;
	
	return 0;
} 
