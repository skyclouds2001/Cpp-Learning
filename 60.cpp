#include<bits/stdc++.h>
using namespace std;
class PERSON{
	friend void creat(vector<PERSON> &v);
	friend void check(vector<PERSON> &v);
	friend void print(vector<PERSON> &v);
	public:
		PERSON(string name,int ascore):name(name),ascore(ascore)
		{
		}
	private:
		string name;
		int ascore;
};
void creat(vector<PERSON> &v)
{
	string nameseed="ABCDE";
	for(int i=0;i<5;++i)
	{
		string name="competitor-";
		name+=nameseed[i];
		PERSON p(name,0);
		v.push_back(p);
	}
}
void check(vector<PERSON> &v)
{
	srand(time(NULL));
	for(vector<PERSON>::iterator it=v.begin();it<v.end();++it)
	{
		deque<int> d;
		for(int i=0;i<10;++i)
		{
			int t=rand()%41+60;
			d.push_back(t);
		}
		sort(d.begin(),d.end());
		d.pop_back();
		d.pop_front();
		int sum=0;
		for(deque<int>::iterator kk=d.begin();kk<d.end();++kk)
			sum+=(*kk);
		it->ascore=sum/d.size();
	}
}
void print(vector<PERSON> &v)
{
	for(vector<PERSON>::iterator it=v.begin();it<v.end();++it)
	{
		cout<<it->name<<' '<<it->ascore<<endl;
	}
}
int main()
{
	vector<PERSON> v;
	creat(v);
	check(v);
	print(v);
	return 0;
}
