#include<algorithm>
#include<vector>
#include<iostream>
using namespace std;

/* 
 * 
 * 
 * 
 *  
 */

class Person {
	public:
		string name;
		int age;
		
		Person(string name, int age) {
			this->age = age;
			this->name = name;
		}
		
		bool operator == (const Person & p) {
			return this->age == p.age;
		}
};

class Greater {
	public:
		bool operator () (int x) {
			return x > 2;
		}
		bool operator () (const Person & p) {
			return p.age > 20;
		}
};

int main() {
	vector<int> v1;
	v1.push_back(0);
	v1.push_back(1);
	v1.push_back(0);
	v1.push_back(2);
	v1.push_back(3);
	v1.push_back(4);
	v1.push_back(3);
	v1.push_back(3);
	v1.push_back(2);
	v1.push_back(1);
	
	vector<Person> v2;
	v2.push_back(*(new Person("a", 20)));
	v2.push_back(*(new Person("b", 30)));
	v2.push_back(*(new Person("c", 20)));
	v2.push_back(*(new Person("d", 20)));
	v2.push_back(*(new Person("e", 20)));
	
	cout<< count_if(v1.begin(), v1.end(), Greater())<< endl;
	cout<< count_if(v2.begin(), v2.end(), Greater())<< endl;
	
	return 0;
}
