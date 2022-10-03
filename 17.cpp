#include<iostream>
using namespace std;
class person{
	public:
		static int x;
		int y;
		mutable int z;
		void f(void) const  //³£º¯Êý 
		{
			//y+=10;  //WRONG!!!
			cout<<z<<endl;
		}
		static void ff(void)
		{
			cout<<x<<endl;
			//cout<<y<<endl;  WRONG!!!
		}
		void fff(void)
		{
			cout<<y<<endl;
		}
	protected:
		
};
int person::x=1000;
int main()
{
	//person::ff();
	//const person p1;
	//p1.f();
	//p1.fff();
	//p1.ff();
	return 0;
}
