#include<iostream>
#include<list>
using namespace std;
list<int> l,l0;
void print(list<int> &l)
{
	for(list<int>::iterator it=l.begin();it!=l.end();++it)
		cout<<*it<<' ';
	cout<<endl<<endl;
}
bool cmp(int a)
{
	return (a<0);
}
int main()
{
	for(int i=1;i<=10;++i)
		l.push_back(i*i*2-2*i+4),l.push_front(i*i*3-6*i+1);
	print(l);
	
	l.pop_back();	l.pop_front();
	print(l);
	//l.swap();
	
	l.resize(16);
	print(l);
	l.resize(18,23);
	print(l);
	
	l.remove_if(cmp);
	print(l);
	
	cout<<*l.begin()<<' '<<*--l.end()<<endl<<endl;
	
	l.reverse();
	print(l);
	
	l.sort();
	print(l);
	
	l0.push_back(-120);
	l.merge(l0);
	print(l);
	
	return 0;
}
