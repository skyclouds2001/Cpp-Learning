#include<iostream>
const double PI=3.1415926;
using namespace std;
class circle{
	public:
		double cr;
		double clength()
		{
			return 2*PI*cr;
		}
	
};
int main()
{
	circle c1;
	c1.cr=1.0;
	cout<<c1.clength()<<endl;
	system("pause");
	return 0;
}
