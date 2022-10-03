#include<iostream>
#include<vector>
using namespace std;
void print(vector<int> &v)
{
	for(vector<int>::iterator it=v.begin();it!=v.end();it++)
		cout<<*it<<' ';
	cout<<endl<<endl;
}
int main()
{
	vector<int> v(10,1300);	print(v);
	
	vector<int> v1=v;		print(v1);
	vector<int> v2(v.begin()+2,v.end()-2);	print(v2);
	vector<int> v3(10,1200);		print(v3);
	vector<int> v4(v);		print(v4);
	
	v.push_back(1000);	v.push_back(1000);	v.push_back(1100);
	v.push_back(1100);	v.push_back(1100);
	print(v);
	
	cout<<v.empty()<<endl;
	cout<<v.size()<<endl;
	cout<<v.capacity()<<endl;
	v.resize(20);
	print(v);
	
	cout<<v.front()<<endl;
	cout<<v.back()<<endl;
	cout<<v[10]<<endl;
	cout<<v.at(5)<<endl;
	cout<<endl;
	
	v.erase(v.begin()+5,v.end()-5);
	v.erase(v.begin()+1);
	v.pop_back();
	print(v);
	
	v.swap(v3);
	v.insert(v.begin()+5,1);
	print(v);
	
	v.reserve(100);
	print(v);
	cout<<v.size()<<endl;
	cout<<v.capacity()<<endl;
	
	return 0;
}
