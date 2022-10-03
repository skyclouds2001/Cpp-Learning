#include<iostream>
#include<string>
using namespace std;

template<typename NAMETYPE,typename AGETYPE=long long>
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
	PERSON<string>p1("sild",34);
	cout<<p1.name<<endl<<sizeof(p1.age)<<endl<<endl;
	return 0;
}
