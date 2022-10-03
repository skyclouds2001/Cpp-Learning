#include<iostream>
using namespace std;
class person{
	friend class check;
	public:
		int a;
		person();
	protected:
		int b; 
};
class check{
	public:
		person *z;
		void visit(void)
		{
			cout<<z->a<<endl<<z->b<<endl;//
		}
		check();
};
person::person()
{
	a=100;
	b=200;
}
check::check()
{
	z=new person;
}
int main()
{
	check c1;
	c1.visit();
	return 0;
}
