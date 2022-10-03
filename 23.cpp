#include<iostream>
using namespace std;

class myint {
	friend ostream & operator<<(ostream &out,myint &t);
	public:
		myint()
		{
			a=0;
		}
		myint & operator++()  //left
		{
			++a;
			return *this;
		}
		myint & operator++(int)  //right
		{
			myint temp=*this;
			++a;
			return temp;
		}
	private:
		int a;
};

ostream & operator<<(ostream &out,myint &t)
{
	out<<t.a<<endl;
	return out;
}

int main()
{
	myint a;
	cout<<a<<endl;
	cout<<++a<<endl;
	cout<<a++<<endl;
	cout<<a<<endl;
	return 0;
}
