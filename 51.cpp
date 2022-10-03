#include<iostream>
#include<string>
#include<typeinfo>
using namespace std;

template<typename T>
class BASE{
	public:
		T a;
};
class SON1:public BASE<int>{
};
template<typename T1,typename T2>
class SON2:public BASE<T1>{
	public:
		T2 s1;
};

int main()
{
	SON2<int,short>p1;
	cout<<p1.a<<endl<<p1.s1;
	return 0;
}
