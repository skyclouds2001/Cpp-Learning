#include<iostream>
#include<algorithm>
#include<functional>
#include<string>
#include<numeric>
#include<vector>
using namespace std;

int move(int x) {
	return x;
}
//	��ͨ���� 
void print1(int x) {
	cout<< x<< " ";
}
//	�º��� 
class print2{
	public:
		operator() (int x) {
			cout<< x<< " ";
		}
};

int main(){
	
	vector<int> v, vp;
	for(int i = 0; i < 10; ++i)
		v.push_back(i * i + i + 2);
	
	//	��Ҫ��ǰ���ٿռ䣬����ᱨ�� 
	vp.resize(v.size());
	transform(v.begin(), v.end(), vp.begin(), move);
	for_each(v.begin(), v.end(), print2());
	
	return 0;
}
