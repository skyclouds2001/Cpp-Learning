#include<fstream>
using namespace std;
int main()
{
	ofstream ofs;
	ofs.open("37.txt",ios::out|ios::in);
	ofs<<"��˼Զ"<<endl<<"File"<<endl;
	ofs.close();
	return 0;
}
