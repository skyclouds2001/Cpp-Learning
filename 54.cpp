#include<bits/stdc++.h>
using namespace std;

template<typename T1,typename T2>
class BASE;

template<typename T1,typename T2>
void print2(BASE<T1,T2> &p2)
{
	cout<<p2.t1<<endl<<p2.t2<<endl;
}

template<typename T1,typename T2>
class BASE{
	public:
		friend void print1(BASE<T1,T2> &p1)
		{
			cout<<p1.t1<<endl<<p1.t2<<endl;
		}
		friend void print2<>(BASE<T1,T2> &p2);
		BASE(T1 s1,T2 s2):t1(s1),t2(s2)
		{	}
	private:
		T1 t1;
		T2 t2;
};

int main()
{
	BASE <string,int> p1("sadly",123456789);
	print1(p1);
	print2(p1);
	return 0;
}
