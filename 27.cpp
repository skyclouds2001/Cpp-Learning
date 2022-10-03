#include<iostream>
using namespace std;
class person{
	public:
		int a,b,*age;
		person(int a,int b)
		{
			this->a=a;
			this->b=b;
			age=new int;
		}
		person & operator*(person &p)
		{
			person t(0,0);
			t.a=(this->a)*(p.a);
			t.b=(this->b)*(p.b);
			return t;
		}
		/*void operator>>(person &p)
		{
			cin>>p.a>>p.b;
		}*/
		person & operator--()
		{
			--(this->a);
			--(this->b);
			return *this;
		}
		person & operator--(int)
		{
			--(this->a);
			--(this->b);
			return *this;
		}
		bool operator<=(person &p)
		{
			if(this->a<=p.a&&this->b<=p.b)
				return true;
			else
				return false;
		}
		person & operator=(person &p)
		{
			if(age!=NULL)
			{
				delete age;
				age=NULL;
			}
			age=new int(*(p.age));
			return *this;
		}
};
int main()
{
	person p1(52,93),p2(34,67),p3(0,0),p4(35,67),p5(33,65),p6(0,0);
	p3=p1*p2;
	cout<<"a="<<p3.a<<" b="<<p3.b<<endl;
	/*cin>>p4;*/
	p3--;
	cout<<"a="<<p3.a<<" b="<<p3.b<<endl;
	--p3;
	cout<<"a="<<p3.a<<" b="<<p3.b<<endl;
	if(p2<=p4)
		cout<<"Yes"<<endl;
	else
		cout<<"No"<<endl;
	if(p2<=p5)
		cout<<"Yes"<<endl;
	else
		cout<<"No"<<endl;
	p6=p3;
	cout<<"a="<<p6.a<<" b="<<p6.b<<endl;
	return 0;
}
