#include<iostream>
using namespace std;

class person{
	public:
		person(int x)
		{
			age=new int(x);
		}
		int *age;
		~person()
		{
			if(age!=NULL)
			{
				delete age;
				age=NULL;
			}
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
	private:
		
};

int main()
{
	person p1(34);
	person p2(67);
	person p3(87);
	
	p3=p2=p1;
	cout<<*(p1.age)<<endl;
	cout<<*(p2.age)<<endl;
	cout<<*(p3.age)<<endl;
	
	return 0;
}
