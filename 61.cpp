#include<iostream>
#include<stack>
using namespace std;
int main()
{
	stack<int> s;
	cout<<s.empty()<<endl;
	for(int i=1;i<=10;++i)
		s.push(i*i-i+6);
	cout<<s.empty()<<endl;
	cout<<s.size()<<endl;
	while(not s.empty())
		cout<<s.top()<<' ',s.pop();
	return 0;
}
