#include<iostream>
using namespace std;
class CPU{
	public:
		virtual void calculate()=0;
};
class VIDEOCARD{
	public:
		virtual void display()=0;
};
class MEMORY{
	public:
		virtual void storage()=0;
};
class COMPUTER{
	public:
		COMPUTER(CPU *c,VIDEOCARD *v,MEMORY *m)
		{
			this->c=c;
			this->v=v;
			this->m=m;
		}
		~COMPUTER()
		{
			if(c!=NULL)
				delete c,c=NULL;
			if(v!=NULL)
				delete v,v=NULL;
			if(m!=NULL)
				delete m,m=NULL;
		}
		void work()
		{
			c->calculate();
			v->display();
			m->storage();
		}
	private:
		CPU *c;
		VIDEOCARD *v;
		MEMORY *m;
};
class INTEL_CPU:public CPU{
	public:
		void calculate()
		{
			cout<<"The CPU of Intel is working."<<endl;
		}
};
class INTEL_VIDEOCARD:public VIDEOCARD{
	public:
		void display()
		{
			cout<<"The VIDEOCARD of Intel is working."<<endl;
		}
};
class INTEL_MEMORY:public MEMORY{
	public:
		void storage()
		{
			cout<<"The MEMORY of Intel is working."<<endl;
		}
};
class LENOVO_CPU:public CPU{
	public:
		void calculate()
		{
			cout<<"The CPU of Lenovo is working."<<endl;
		}
};
class LENOVO_VIDEOCARD:public VIDEOCARD{
	public:
		void display()
		{
			cout<<"The VIDEOCARD of Lenovo is working."<<endl;
		}
};
class LENOVO_MEMORY:public MEMORY{
	public:
		void storage()
		{
			cout<<"The MEMORY of Lenovo is working."<<endl;
		}
};
int main()
{
	COMPUTER *p=new COMPUTER(new INTEL_CPU,new LENOVO_VIDEOCARD,new INTEL_MEMORY);
	p->work();
	delete p;
	return 0;
}
