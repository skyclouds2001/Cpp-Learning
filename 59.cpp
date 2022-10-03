#include<deque>
#include<iostream>
#include<algorithm>
using namespace std;
void print(deque<int> d)
{
	for(deque<int>::const_iterator it=d.begin();it<d.end();++it)
		cout<<*it<<' ';
	cout<<endl;
}
int main()
{
	deque<int> d1(20,5645);
	print(d1);
	
	deque<int> d2;
	d2.assign(d1.begin()+5,d1.end()-5);
	print(d2);
	
	d2.pop_front();
	d2.push_front(9932);
	d2.push_back(344);
	print(d2);
	
	sort(d2.begin(),d2.end());
	print(d2);
	return 0;
}
