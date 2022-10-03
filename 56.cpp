#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void print(int x)
{
	cout<<x<<endl;
}

int main()
{
	vector<int> v;
	
	v.push_back(10);	//插入数据 
	v.push_back(100);
	v.push_back(1000);
	
//	vector<int>::iterator itbegin=v.begin();	//起始迭代器 
//	vector<int>::iterator itend=v.end();	//结束迭代器 
//	while(itbegin!=itend)
//		cout<<*itbegin<<endl,itbegin++;
	
//	for(vector<int>::iterator it=v.begin();it!=v.end();it++)
//		cout<<*it<<endl;
	
//	for_each(v.begin(),v.end(),print);
//	v.rbegin();	v.rend();
	return 0;
}
