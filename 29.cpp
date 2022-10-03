#include<iostream>
#include<string>
using namespace std;
class base{
	public:
		int a;
		static int b;
		void outing(void)
		{
			cout<<"base"<<endl;
		}
};
class cppbase{
	public:
		int dd;
};
class cpp: public base,public cppbase
{
	public:
		int a;
		static int b;
		void outing(void)
		{
			cout<<"cpp"<<endl;
		}
		void outing(int)
		{
			cout<<"cpp |int"<<endl;
		}
};
int base::b=100;
int cpp::b=200;
int main()
{
	cpp p;
	p.a=100;	p.base::a=200;
	cout<<cpp::b<<endl;
	cout<<cpp::base::b<<endl;
	p.outing();
	p.base::outing();
	p.outing(2);
	p.dd=100000;
	cout<<p.dd<<endl;
	return 0;
}
