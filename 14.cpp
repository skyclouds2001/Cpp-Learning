#include<iostream>
using namespace std;
class  person{
	// Private section
	public:
		// Public Declarations
		int ma,mb,mc;
		/*person(int a,int b,int c)
		{
			ma=a; mb=b; mc=c;
		}*/
		person(int a,int b,int c):ma(a),mb(b),mc(c)
		{
		}
		void output(void)
		{
			cout<<ma<<endl<<mb<<endl<<mc<<endl;
		}
	protected:
		// Protected Declarations
};

int main()
{
	person p1(1,2,3);
	p1.output();
	return 0;
} 
