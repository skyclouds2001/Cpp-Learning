#include<iostream>
using namespace std;
class  person{
	// Private section
	public:
		// Public Declarations
		int ma,mb,mc;
		int age;
		static int kk;
		person(int a,int b,int c):ma(a),mb(b),mc(c)
		{
		}
		person outout(void)
		{
			cout<<kk<<endl;
			return *this;
		}
		void ff(int age)
		{
			this->age=age;
		}
		static void output(void)
		{
			cout<<kk<<endl;
		}
	protected:
		// Protected Declarations
};
int person::kk=1000;   //�����ྲ̬��Ա���� 
int main()
{
	person::output();
	return 0;
} 
