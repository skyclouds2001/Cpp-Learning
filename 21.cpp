#include<iostream>
using namespace std;

class person{
	public:
		int a,b;
		/*person operator+(person &p)
		{
			person t;
			t.a=this->a+p.a;
			t.b=this->b+p.b;
			return t;
		}*/
	protected:
		
};

/*person operator+(person &p1,person &p2)
{
	person t;
	t.a=p1.a+p2.a;
	t.b=p1.b+p2.b;
	return t;
}*/

person operator+(person &p,int x)
{
	p.a+=x;
	p.b+=x;
	return p;
}

int main()
{
	person p1={10,20},p2={100,200},p3;
	//p3=p1+p2;
	//p3=p1.operator+(p2);
	//p3=operator+(p1,p2);
	p3=p1+1;
	cout<<p3.a<<endl<<p3.b<<endl;
	return 0;
}
