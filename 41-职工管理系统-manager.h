#pragma once
#include<string>
#include"41-职工管理系统-worker.h"
using namespace std;

class MANAGER:public WORKER{
	public:
		int id;
		string name;
		int depart;
		string sex;
		int age;
		string phone;
		void showinfo(void);
		string gaindepart(void);
		MANAGER(int id,string name,int dp,string sex,int age,string phone);
};
