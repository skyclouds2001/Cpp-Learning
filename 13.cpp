#include<iostream>
using namespace std;
class person{
	public:
		person()
		{
			cout<<"wc/pt gzhs"<<endl;
		}
		person(int k)
		{
			cout<<"yc gzhs"<<endl;
		}
		person(const person &p)
		{
			cout<<"kb gzhs"<<endl;
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
	person s2(1);
	person s3(s1);
	person s4=person(1);
	person(2);
	person p5=1;
	cout<<"\n\n";
	//system("pause");
	return 0;
}
