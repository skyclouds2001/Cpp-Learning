#pragma once
#include<iostream>
#include<string>
using namespace std;

class WORKER{
	public:
		int id;
		string name;
		int depart;
		string sex;
		int age;
		string phone;
		virtual void showinfo()=0;
		virtual string gaindepart()=0;
};
