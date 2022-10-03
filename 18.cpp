#include<iostream>
using namespace std;
class person{
	friend void friendpart(person *p);
	public:
		int a;
		person(int aa,int bb):a(aa),b(bb)
		{
		}
	protected:
		int b; 
};
void friendpart(person *p)
{
	cout<<p->a<<endl<<p->b<<endl;
}
int main()
{
	person p1(1,3);
	friendpart(&p1);
	
	return 0;
}
