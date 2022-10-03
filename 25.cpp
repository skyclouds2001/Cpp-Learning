#include<iostream>
#include<string>
using namespace std;

class person{
	public:
		string name;
		int age;
		person(string name,int age)
		{
			this->name=name;
			this->age=age;
		}
		bool operator== (person &p)
		{
			if(this->age==p.age)
				return true;
			else
				return false;
		}
		bool operator!= (person &p)
		{
			if(this->age!=p.age)
				return true;
			else
				return false;
		}
	private:
		
};

int main()
{
	person p1("´óÀĞ",13),p2("Ì«Ç¿ÁË",46);
	
	if(p1==p2)
		cout<<"age=="<<endl;
	else
		cout<<"age!="<<endl;
	if(p1!=p2)
		cout<<"age!="<<endl;
	else
		cout<<"age=="<<endl;
	
	return 0;
}
