#include<iostream>
#include<string>
using namespace std;

template<typename NAMETYPE,typename AGETYPE>
class PERSON{
	public:
		NAMETYPE name;
		AGETYPE age; 
		PERSON(NAMETYPE n,AGETYPE a):age(a),name(n)
		{
		}
};

int main()
{
	PERSON<string,int>p1("sild",34);
	cout<<p1.name<<endl<<p1.age<<endl;
	return 0;
}
