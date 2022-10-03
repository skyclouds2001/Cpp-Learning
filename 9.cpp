#include<iostream>
#include<string>
const double PI=3.1415926;
using namespace std;
class Cube{
	public:
		int s()
		{
			return 2*(l*w+w*h+l*h);
		}
		int v()
		{
			return l*w*h;
		}
		void setlwh()
		{
			cin>>l>>w>>h;
		}
		void issame(Cube &c)
		{
			if(l==c.l&&w==c.w&&h==c.h)
				cout<<"Yes"<<endl;
			else
				cout<<"No"<<endl;
		}
	private:
		int l,w,h;
};
int main()
{
	Cube c1,c2;
	c1.setlwh();
	c2.setlwh();
	cout<<c1.s()<<'\t'<<c1.v()<<endl;
	cout<<c2.s()<<'\t'<<c2.v()<<endl;
	c1.issame(c2);
	return 0;
}
