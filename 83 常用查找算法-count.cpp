#include<algorithm>
#include<vector>
#include<iostream>
#include<string>
using namespace std;

/* 
 * count()
 * 统计元素个数 
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
		
		bool operator == (int age) {
			return this->age == age;
		}
		
		bool operator == (const Person & p) {
			return this->age == p.age;
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
	
	cout<< count(v1.begin(), v1.end(), 3)<< endl;
	
	vector<Person> v2;
	v2.push_back(*(new Person("a", 20)));
	v2.push_back(*(new Person("b", 30)));
	v2.push_back(*(new Person("c", 20)));
	v2.push_back(*(new Person("d", 20)));
	v2.push_back(*(new Person("e", 20)));
	
	cout<< count(v2.begin(), v2.end(), 20)<< endl;
	cout<< count(v2.begin(), v2.end(), *(new Person("f", 30)))<< endl;
	
	return 0;
}
