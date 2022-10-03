#pragma once

#include<iostream>
using namespace std;
template<typename T1,typename T2>
class BASE{
	public:
		T1 t1;
		T2 t2;
		BASE(T1 s1,T2 s2):t1(s1),t2(s2)
		{	}
		void f(void)
		{
			cout<<t1<<endl<<t2<<endl;
		}
};
