#include<iostream>
using namespace std;
class person{
	public:
		person()
		{
			cout<<"gzhs"<<endl;
		}
		~person()
		{
			cout<<"xghs"<<endl;
		}
};
void f()
{
	person s2;
	cout<<"\n\n";
}
int main()
{
	person s1;
	cout<<"\n\n";
	f();
	cout<<"\n\n";
	//system("pause");
	return 0;
}
