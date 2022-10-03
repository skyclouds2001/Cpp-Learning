#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main()
{
	string s1,s2;
	string s3("sfedfebsfhj");
	string s4(s3);
	string s5(12,'s');
	cout<<s1<<endl<<s2<<endl<<s3<<endl<<s4<<endl<<s5<<endl<<endl;
	
	s1="sedffszxcc";
	s2=s5;
	s3='%';
	cout<<s1<<endl<<s2<<endl<<s3<<endl<<s4<<endl<<s5<<endl<<endl;
	s1.assign("dedfvbgg6dffdf");
	s2.assign(20,'a');
	s3.assign("1233f3ddccvvf",6);
	s4.assign(s5);
	cout<<s1<<endl<<s2<<endl<<s3<<endl<<s4<<endl<<s5<<endl<<endl;
	
	s1+="swe"; s5=s1+"2#";
	s2+=s3;
	s3+='s';
	cout<<s1<<endl<<s2<<endl<<s3<<endl<<s4<<endl<<s5<<endl<<endl;
	s1.append("sdfdxcc");
	s2.append("sdfdxcc",3);
	s3.append(16,'e');	s3.push_back('d');
	s4.append(s2);
	s5.append(s2,20,3);
	cout<<s1<<endl<<s2<<endl<<s3<<endl<<s4<<endl<<s5<<endl<<endl;
	
	cout<<s1.find('s')<<endl;
	s2.replace(1,3,"34r");	cout<<s2<<endl;
	cout<<s1.rfind('s')<<endl<<endl;
	
	cout<<s1.compare(s3)<<endl;
	cout<<s1.compare(s1)<<endl<<endl;
	
	cout<<s1[5]<<endl;
	cout<<s1.at(10)<<endl<<endl;
	
	s1.insert(12,s2);
	cout<<s1<<endl<<endl;
	
	s1.erase(12,14);
	cout<<s1<<endl;
	s1.erase(25);
	cout<<s1<<endl<<endl;
	
	cout<<s1.substr(3,30);
	
	return 0;
}
