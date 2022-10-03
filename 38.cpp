#include<fstream>
#include<iostream>
#include<string>
using namespace std;
int main()
{
	ifstream ifs;
	ifs.open("38.txt",ios::out);
	if(not ifs.is_open())
	{
		cout<<"error!"<<endl;
		return -1;
	}
	//char s[1024]={'\0'};
	//while(ifs>>s)
	//{
	//	cout<<s<<endl;
	//}
	//char s[1024]={'\0'};
	//while(ifs.getline(s,sizeof(s)))
	//{
	//	cout<<s<<endl;
	//}
	//string ss;
	//while(getline(ifs,ss))
	//{
	//	cout<<ss<<endl;
	//}
	char c;
	while((c=ifs.get())!=EOF)
	{
		cout<<c;
	}
	ifs.close();
	return 0;
}
