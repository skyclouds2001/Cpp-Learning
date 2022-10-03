#include<string>
#include"41-职工管理系统-worker.h"
#include"41-职工管理系统-manager.h"
using namespace std;

MANAGER::MANAGER(int id,string name,int dp,string sex,int age,string phone)
{
	this->id=id;
	this->name=name;
	this->depart=dp;
	this->sex=sex;
	this->age=age;
	this->phone=phone;
}

string MANAGER::gaindepart(void)
{
	return string("经理");
}
void MANAGER::showinfo(void)
{
	cout<<id<<'\t'<<name<<'\t'<<gaindepart()<<'\t'<<sex<<'\t'<<age<<'\t'<<phone<<endl;
}
