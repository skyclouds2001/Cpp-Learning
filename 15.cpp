#include<iostream>
using namespace std;
class  person{
	// Private section
	public:
		// Public Declarations
		int ma,mb,mc;
		static int kk;
		person(int a,int b,int c):ma(a),mb(b),mc(c)
		{
		}
		void outout(void)
		{
			cout<<kk<<endl;
		}
		static void output(void)
		{
			cout<<kk<<endl;
		}
	protected:
		// Protected Declarations
};
int person::kk=1000;   //声明类静态成员变量 
int main()
{
	person::output();
	return 0;
} 
