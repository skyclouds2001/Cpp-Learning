#include<iostream>
using namespace std;

class person{
	friend ostream & operator<<(ostream &out,person &p);
	public:
		person(int aa,int bb):a(aa),b(bb)
		{
		}
	private:
		int a,b;	
};

ostream & operator<<(ostream &out,person &p)
{
	out<<p.a<<endl<<p.b<<endl;
	return out;
}
		
int main()
{
	person p(13,22);
	cout<<p<<endl;
	return 0;
}
