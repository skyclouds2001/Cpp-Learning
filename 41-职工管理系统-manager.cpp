#include<string>
#include"41-ְ������ϵͳ-worker.h"
#include"41-ְ������ϵͳ-manager.h"
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
	return string("����");
}
void MANAGER::showinfo(void)
{
	cout<<id<<'\t'<<name<<'\t'<<gaindepart()<<'\t'<<sex<<'\t'<<age<<'\t'<<phone<<endl;
}
