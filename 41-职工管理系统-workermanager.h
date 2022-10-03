#pragma once
#include<iostream>
#include<cstdlib>
#include<fstream>
#include<algorithm>
#include"41-职工管理系统-worker.h"
#include"41-职工管理系统-employee.h"
#include"41-职工管理系统-manager.h"
#include"41-职工管理系统-boss.h"
#define FILENAME "41-职工管理系统-workermanager.txt"
using namespace std;

class WORKERMANAGER{
	public:
		WORKERMANAGER();
		~WORKERMANAGER();
		void save(void);
		void menuload(void);
		void exitsystem(void);
		void solvemistake(void);
		void addworker(void);
		int getnum(void);
		void setup(void);
		void show(void);
		void del(void);
		int exist(int);
		void change(void);
		void search(void);
		void sort(void);
		void clean(void);
	public:
		bool filempty;		//0非空		1空
		int nworker;
		WORKER **pworker;
};
