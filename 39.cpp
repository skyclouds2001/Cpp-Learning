#include<fstream>
#include<iostream>
#include<string>
using namespace std;
int main()
{
	ofstream ofs;
	ofs.open("39.txt",ios::binary);
	char s[1024]={"sedfeddffddss"};
	ofs.write((const char*)&s,sizeof(s));
	cout<<s<<endl;
	ofs.close();
	return 0;
}
