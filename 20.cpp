#include<iostream>
using namespace std;

class person;
class check{
	public:
		person *z;
		void visit(void);
};

class person{
	friend void check::visit();
	public:
		int a;
	protected:
		int b;
};

void check::visit(void)
{
	if(z==NULL)	return;
	cout<<"z->a = "<<z->a<<endl<<"z->b = "<<z->b<<endl;
}

int main()
{
	check c1;
	c1.z=new person;
	c1.visit();
	return 0;
}
