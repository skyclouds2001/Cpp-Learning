#include<iostream>
using namespace std;
class CALCULATOR{
	public:
		int a,b;
		virtual int getans()=0;
};
class CALCULATORadd:public CALCULATOR
{
	public:
		virtual int getans()
		{
			return (a+b);
		}
};
class CALCULATORsub:public CALCULATOR
{
	public:
		virtual int getans()
		{
			return (a-b);
		}
};
class CALCULATORmul:public CALCULATOR
{
	public:
		virtual int getans()
		{
			return (a*b);
		}
};
int main()
{
	CALCULATOR *add=NULL;
	
	add=new CALCULATORadd;
	add->a=98; add->b=890;
	cout<<"add:\t"<<add->getans()<<endl;
	delete add;
	add=NULL;
	
	return 0;
}
