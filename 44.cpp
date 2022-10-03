#include<iostream>
using namespace std;

template<typename T>
void theswap(T &a,T &b)
{
	T t=a;
	a=b;
	b=t;
}
template<typename T>
void theprint(T a[],int len)
{
	for(int i=0;i<=len;++i)
		cout<<a[i]<<' ';
	cout<<endl;
}

int main()
{
	int a[]={2,4,11,3344,432,45966,32,123,0,12,33,13,343498,78};
	char b[]={"f^d%~w[]=r$7:o{}-j\\4;8!()2'0\"#+1'8'n&k'm_x*z,z,.l|k<>?/c5"};
	int na=sizeof(a)/sizeof(a[0]);
	for(int i=0;i<na;++i)
		for(int j=0;j<na-i-1;++j)
			if(a[j]>a[j+1])
				theswap(a[j],a[j+1]);
	int nb=sizeof(b)/sizeof(b[0]);
	for(int i=0;i<nb;++i)
		for(int j=0;j<nb-i-1;++j)
			if(b[j]>b[j+1])
				theswap(b[j],b[j+1]);
	theprint(a,na);
	theprint(b,nb);
	return 0;
}
