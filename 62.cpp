#include<iostream>
#include<queue>
using namespace std;
int main()
{
	queue<int> q;
	for(int i=1;i<=10;++i)
		q.push(i*i*i-2*i*i+8*i-12);
	cout<<q.front()<<' '<<q.back()<<endl;
	q.pop();
	cout<<q.front()<<' '<<q.back()<<endl;
	return 0;
}
