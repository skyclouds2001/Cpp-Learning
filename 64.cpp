#include<iostream>
#include<set>
using namespace std;
void init(set<int,greater<int> > &s)
{
	for(int i=0;i<=10;++i)
		s.insert(i*i*2-i+9);
}
void printset(set<int,greater<int> > &s)
{
	set<int,greater<int> >::iterator it;
	for(it=s.begin();it!=s.end();++it)
		cout<<*it<<' ';
	cout<<endl<<endl;
}
int main()
{
	set<int,greater<int> > s;
	init(s);
	printset(s);
	cout<<s.empty()<<endl<<s.size()<<endl<<endl;
	s.erase(10);
	printset(s);
	cout<<*s.lower_bound(100)<<endl<<*s.upper_bound(100)<<endl<<endl;
	pair<set<int,greater<int> >::iterator,bool> res=s.insert(100);
	cout<<res.second<<endl<<endl;
	return 0;
}
