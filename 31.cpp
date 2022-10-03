#include<iostream>
using namespace std;
class PERSON{
	public:
		virtual void speak()
		{
			cout<<"PERSON SPEAKING!!!"<<endl;
		}
};
class YOU:public PERSON
{
	public:
		virtual void speak()
		{
			cout<<"YOU SPEAKING!!!"<<endl;
		}
};
class ME:public PERSON
{
	public:
		virtual void speak()
		{
			cout<<"ME SPEAKING!!!"<<endl;
		}
};
void dospeak(PERSON &p)
{
	p.speak();
}
int main()
{
	YOU p;
	dospeak(p);
	return 0;
}
