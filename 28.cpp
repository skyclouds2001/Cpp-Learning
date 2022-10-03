#include<iostream>
#include<string>
using namespace std;
class base{
	public:
		const string a="list:";
		const string b="context\tbase\tchoose";
};
class cpp: public base
{
	public:
		const string p="cpp";
		void output(void)
		{
			cout<<a<<endl<<b<<endl<<p<<endl;
		}
};
int main()
{
	cpp p;
	p.output();
	return 0;
}
