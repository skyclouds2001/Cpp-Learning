#include<bits/stdc++.h>
using namespace std;

template<typename T1,typename T2>
class BASE{
	public:
		T1 a;
		T2 b;
		BASE(T1 s1,T2 s2);
//		BASE(T1 s1,T2 s2)
//		{
//			this->a=s1;
//			this->b=s2;
//		}
		void f(void);
//		void f(void)
//		{
//			cout<<this->a<<endl<<this->b<<endl;
//		}
};

template<typename T1,typename T2>
BASE<T1,T2>::BASE(T1 s1,T2 s2)
{
	this->a=s1;
	this->b=s2;
}
template<typename T1,typename T2>
void BASE<T1,T2>::f(void)
{
	cout<<this->a<<endl<<this->b<<endl;
}

int main()
{
	BASE<int,int> p1(1,2);
	p1.f();
	return 0;
}
