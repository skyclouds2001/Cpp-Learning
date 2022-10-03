#include<iostream>
using namespace std;

class P{
	public:
		int a,b;
};

template<typename T>
bool isame(T &a,T &b)
{
	return (a==b);
}
template<>bool isame(P &a,P &b)
{
	return (a.a==b.a&&a.b==b.b);
}
int main()
{
	P p={1,2},q={1,2},r={1,3};
	cout<<isame(p,q)<<endl;
	cout<<isame(r,q)<<endl;
	return 0;
}

