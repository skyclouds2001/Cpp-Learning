#include<string>
#include"41-职工管理系统-worker.h"
#include"41-职工管理系统-boss.h"
using namespace std;

BOSS::BOSS(int id,string name,int dp,string sex,int age,string phone)
{
	this->id=id;
	this->name=name;
	this->depart=dp;
	this->sex=sex;
	this->age=age;
	this->phone=phone;
}

string BOSS::gaindepart(void)
{
	return string("经理");
}
void BOSS::showinfo(void)
{
	cout<<id<<'\t'<<name<<'\t'<<gaindepart()<<'\t'<<sex<<'\t'<<age<<'\t'<<phone<<endl;
}
