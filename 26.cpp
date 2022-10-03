#include<iostream>
#include<string>
using namespace std;

class myprint{
	public:
		void operator() (string t)
		{
			cout<<t<<endl;
		}
		int a,b;
	private:
		
};

class myadd{
	public:
		int c,d;
		int operator() (int a,int b)
		{
			return a+b;
		}
	private:
		
};

int main()
{
	myprint d;
	d("hello world");
	myadd dd;
	cout<<dd(1,3)<<endl;
	return 0;
}
