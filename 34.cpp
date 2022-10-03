#include<iostream>
using namespace std;
class MAKE{
	public:
		virtual void boil()=0;
		virtual void brew()=0;
		virtual void pour()=0;
		virtual void put()=0;
		void make()
		{
			cout<<"------------------------------"<<endl;
			boil();
			brew();
			pour();
			put();
			cout<<"------------------------------"<<endl;
			cout<<endl;
		}
};
class JUICE:public MAKE{
	public:
		void boil()
		{
			cout<<"boil"<<endl;
		}
		void brew()
		{
			cout<<"brew"<<endl;
		}
		void pour()
		{
			cout<<"pour"<<endl;
		}
		void put()
		{
			cout<<"put sugar"<<endl;
		}
};
class MILK:public MAKE{
	public:
		void boil()
		{
			cout<<"boil"<<endl;
		}
		void brew()
		{
			cout<<"brew"<<endl;
		}
		void pour()
		{
			cout<<"pour"<<endl;
		}
		void put()
		{
			cout<<"put candy"<<endl;
		}
};
int main()
{
	MAKE *p1=new JUICE;
	MAKE *p2=new MILK;
	p1->make();
	p2->make();
	delete p1;
	delete p2;
	return 0;
}
