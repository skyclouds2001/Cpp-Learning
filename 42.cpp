#include<iostream>
using namespace std;

template<typename T>
void theswap(T &a,T &b)
{
	T t=a;
	a=b;
	b=t;
}

int main()
{
	int a=1,b=2;
	theswap(a,b);
	theswap<int>(a,b);
	cout<<"a="<<a<<endl<<"b="<<b<<endl;
	return 0;
}

