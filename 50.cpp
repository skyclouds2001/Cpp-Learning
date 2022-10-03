#include<iostream>
#include<string>
#include<typeinfo>
using namespace std;

template<typename T1,typename T2>
class PERSON{
	public:
		T1 name;
		T2 age;
		PERSON(T1 s1,T2 s2):name(s1),age(s2)
		{	}
		void out(void)
		{
			cout<<this->name<<endl<<this->age<<endl;
		}
};

/*void f1(PERSON<string,int> &p)
{
	p.out();
}*/

/*template<typename T1,typename T2>
void f2(PERSON<T1,T2> &p)
{
	p.out();
	cout<<typeid(T1).name()<<endl;
	cout<<typeid(T2).name()<<endl;
}*/

template<typename T>
void f3(T &p)
{
	p.out();
	cout<<typeid(T).name()<<endl;
}

int main()
{
	PERSON<string,int> p1("Tom",123);
//	f1(p1);
//	f2(p1);
	f3(p1);
	return 0;
}
