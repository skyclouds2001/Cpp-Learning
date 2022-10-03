#include<iostream>
using namespace std;
class animal{
	public:
		int m;
		void f(void)
		{
			cout<<"a";
		}
};
class aa:virtual public animal
{
	public:
		int a;
};
class bb:virtual public animal
{
	public:
		int b;
};
class pp:public aa,public bb
{
	public:
		int p;
};
int main()
{
	pp a;
	a.f();
	return 0;
}
