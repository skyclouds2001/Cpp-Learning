#include<iostream>
#include<cmath>
using namespace std;
class Circle{
	public:
		double d(void)
		{
			return sqrt(pow((px-cx),2)+pow((py-cy),2));
		}
		void position(void)
		{
			double s=d();
			if(s>r+1e-6)	cout<<"out"<<endl;
			else if(s>=r-1e-6&&s<=r+1e-6)	cout<<"on"<<endl;
			else if(s<r-1e-6)	cout<<"in"<<endl;
		}
		void set(void)
		{
			cout<<"point x&y circle x&y&r"<<endl;
			cin>>px>>py>>cx>>cy>>r;
		}
	private:
		double px,py;
		double cx,cy,r;
};
int main()
{
	Circle c;
	c.set();
	c.position();
	return 0;
}
