#include<iostream>
using namespace std;

//void theswap(char &a,char &b)
//{
//	char t=a;
//	a=b;
//	b=t;
//	cout<<4<<endl;
//}

//void theswap(int &a,int &b)
//{
//	int t=a;
//	a=b;
//	b=t;
//	cout<<1<<endl;
//}

template<typename T>
void theswap(T &a,T &b,T)
{
	T t=a;
	a=b;
	b=t;
	cout<<"2/3"<<endl;
}

template<typename T>
void theswap(T &a,T &b)
{
	T t=a;
	a=b;
	b=t;
	cout<<0<<endl;
}

int main()
{
	int a=1,b=2;
	theswap(a,b,1);
	return 0;
}
