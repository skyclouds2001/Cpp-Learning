#include<iostream>
#include<string>
using namespace std;

class A{
	public:
		int count;
		A() {
			this->count = 0;
		} 
		
		//	��������  ����ӵ���Լ���״̬ ����Ϊ�������� 
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
