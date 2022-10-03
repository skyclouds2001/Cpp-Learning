#include<iostream>
#include"41-职工管理系统-workermanager.h"
using namespace std;
int main()
{
	WORKERMANAGER wm;
	int choice;
	while(true)
	{
		wm.menuload();
		cout<<"请输入您想执行的操作："<<endl<<endl;
		cin>>choice;
		switch(choice)
		{
			case 0:
				wm.save();
				wm.exitsystem();
				break;
			case 1:
				wm.addworker();
				break;
			case 2:
				wm.show();
				break;
			case 3:
				wm.del();
				break;
			case 4:
				wm.change();
				break;
			case 5:
				wm.search();
				break;
			case 6:
				wm.sort();
				break;
			case 7:
				wm.clean();
				break;
			default:
				wm.solvemistake();
				break;
		}
	}
	return 0;
}
