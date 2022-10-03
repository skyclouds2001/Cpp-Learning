#include<iostream>
#include<string>
using namespace std;
class ANIMAL{
	public:
		int a,b;
		virtual void speak()=0;
		ANIMAL()
		{
			cout<<"ANIMAL()"<<endl;
		}
		/*~ANIMAL()
		{
			cout<<"~ANIMAL()"<<endl;
		}*/
		//virtual ~ANIMAL(){};
		virtual ~ANIMAL()=0;
};
class CAT:public ANIMAL{
	public:
		string *name;
		CAT(string name)
		{
			cout<<"CAT()"<<endl;
			this->name=new string(name);
		}
		~CAT()
		{
			delete this->name;
			cout<<"~CAT()"<<endl;
		}
		void speak()
		{
			cout<<*name<<" is speaking!"<<endl;
		}
};
ANIMAL::~ANIMAL()
{
	cout<<"~ANIMAL()"<<endl;
}
int main()
{
	ANIMAL *p=new CAT("Tom");
	p->speak();
	return 0;
}
