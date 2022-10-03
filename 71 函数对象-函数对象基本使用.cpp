#include<iostream>
#include<string>
using namespace std;

class A{
	public:
		int count;
		A() {
			this->count = 0;
		} 
		
		//	函数参数  可以拥有自己的状态 可作为函数参数 
		int operator() (int v1, int v2) {
			++(this->count);
			return v1 + v2;
		}
		void operator() (string s) {
			cout<< s<<endl;
		}
};

void doprint(A & a, string s) {
	a(s);
}

int main() {
	
	A a;
	cout<< a(1, 2)<<endl;
	doprint(a, "C++"); 
	
	system("pause");
	
	return 0;
}
