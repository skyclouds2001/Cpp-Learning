#pragma once
#include<string>
#include"41-ְ������ϵͳ-worker.h"
using namespace std;

class EMPLOYEE:public WORKER{
	public:
		int id;
		string name;
		int depart;
		string sex;
		int age;
		string phone;
		void showinfo(void);
		string gaindepart(void);
		EMPLOYEE(int id,string name,int dp,string sex,int age,string phone);
};
