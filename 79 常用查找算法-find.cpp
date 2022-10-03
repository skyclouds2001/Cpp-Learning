#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

//	find()	返回一个指向查找元素的迭代器iterator 

class D{
	public:
		int at;
		D(int x = 10){
			this->at = x;
		}
		bool operator== (const D & d){
			return this->at == d.at;
		}
};

int main(){
	
	vector<int> v1;
	for(int i = 0; i < 20; ++i)
		v1.push_back(i * i + i - 1);
	
	vector<int>::iterator it1 = find(v1.begin(), v1.end(), 19);
	if(it1 != v1.end())
		cout<< *it1<< endl<< it1 - v1.begin()<< endl;
	
	//	
	vector<D> v2;
	for(int i = 0; i < 20; ++i)
		v2.push_back(* new D(i * 2));
		
	vector<D>::iterator it2 = find(v2.begin(), v2.end(), * new D(20));
	if(it2 != v2.end())
		cout<< (*it2).at<< endl<< it2 - v2.begin()<< endl;
	
	return 0;
} 
