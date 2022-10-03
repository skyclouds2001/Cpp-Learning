#include<iostream>
#include<string>
const double PI=3.1415926;
using namespace std;
class student{
	public:
		string name;
		int id;
		void print()
		{
			cout<<name<<endl<<id<<endl;
		}
		void set()
		{
			cin>>name>>id;
		}
};
int main()
{
	student s1;
	s1.set();
	system("pause");
	s1.print();
	//system("pause");
	return 0;
}
