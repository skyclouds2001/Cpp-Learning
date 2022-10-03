#include<fstream>
#include<iostream>
#include<string>
using namespace std;
int main()
{
	ifstream ifs;
	ifs.open("40.txt",ios::binary);
	char s[1024]={};
	ifs.read((char*)&s,sizeof(s));
	cout<<s<<endl;
	ifs.close();
	return 0;
}
