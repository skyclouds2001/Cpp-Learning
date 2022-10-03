#include"41-职工管理系统-workermanager.h"
using namespace std;

WORKERMANAGER::WORKERMANAGER()
{
	ifstream ifs;
	ifs.open(FILENAME,ios::in);
	if(!ifs.is_open())
	{
		this->nworker=0;
		this->pworker=NULL;
		this->filempty=true;
		ifs.close();
		return;
	}
	else
	{
		char ch;
		ifs>>ch;
		if(ifs.eof())
		{
			this->nworker=0;
			this->pworker=NULL;
			this->filempty=true;
			ifs.close();
		}
		else
		{
			this->nworker=getnum();
			this->pworker=new WORKER*[this->nworker]; 
			setup();
			this->filempty=false;
			ifs.close();
		}
	}
}

WORKERMANAGER::~WORKERMANAGER()
{
	for(int i=0;i<this->nworker;++i)
		if(!this->pworker[i])
			delete this->pworker[i],this->pworker[i]=NULL;
	delete [] this->pworker;
	this->pworker=NULL;
	this->nworker=0;
	this->filempty=true;
}

void WORKERMANAGER::save(void)
{
	ofstream ofs;
	ofs.open(FILENAME,ios::out);
	for(int i=0;i<this->nworker;++i)
	{
		ofs<<this->pworker[i]->id<<' '
			<<this->pworker[i]->name<<' '
			<<this->pworker[i]->depart<<' '
			<<this->pworker[i]->sex<<' '
			<<this->pworker[i]->age<<' '
			<<this->pworker[i]->phone<<endl;
	}
	ofs.close();
}

void WORKERMANAGER::menuload(void)
{
	cout<<"________________________________________"<<endl; 
	cout<<"****************************************"<<endl;
	cout<<"******** 欢迎使用职工管理系统！*********"<<endl;
	cout<<"*********** 1：添加职工信息 ************"<<endl;
	cout<<"*********** 2：显示职工信息 ************"<<endl;
	cout<<"*********** 3：删除职工信息 ************"<<endl;
	cout<<"*********** 4：修改职工信息 ************"<<endl;
	cout<<"*********** 5：查找职工信息 ************"<<endl;
	cout<<"*********** 6：职工信息排序 ************"<<endl;
	cout<<"*********** 7：清空所有信息 ************"<<endl;
	cout<<"*********** 0：退出管理系统 ************"<<endl;
	cout<<"****************************************"<<endl;
	cout<<"________________________________________"<<endl;
	cout<<endl;
}

void WORKERMANAGER::exitsystem(void)
{
	cout<<"________________________________________"<<endl; 
	cout<<"****************************************"<<endl;
	cout<<"即将退出系统…"<<endl;
	cout<<"欢迎下次使用职工信息管理系统"<<endl;
	cout<<"****************************************"<<endl;
	cout<<"________________________________________"<<endl;
	system("pause");
	system("cls");
	exit(0);
}

void WORKERMANAGER::solvemistake(void)
{
	cout<<"________________________________________"<<endl; 
	cout<<"****************************************"<<endl;
	cout<<"不存在操作！"<<endl;
	cout<<"请重新输入！"<<endl;
	cout<<"****************************************"<<endl;
	cout<<"________________________________________"<<endl;
	system("pause");
	system("cls");
}

void WORKERMANAGER::addworker(void)
{
	cout<<"请输入添加的员工数目："<<endl;
	int addnum;
	cin>>addnum;
	if(addnum>0)
	{
		int totalnum=addnum+this->nworker;
		WORKER **pnum=new WORKER*[totalnum];
		for(int i=0;i<this->nworker;++i)
			pnum[i]=this->pworker[i];
		int id;		string name;	int dep;
		string sex;	int age;		string phone;
		WORKER *worker=NULL;
		for(int i=0;i<addnum;++i)
		{
			cout<<"请输入第"<<i+1<<"个职工的编号"<<endl;
			cin>>id;
			cout<<"请输入第"<<i+1<<"个职工的姓名"<<endl;
			cin>>name;
			cout<<"请输入第"<<i+1<<"个职工的部门编号"<<endl;
			cout<<"1：普通员工"<<endl;
			cout<<"2：经理"<<endl;
			cout<<"3：老板"<<endl;
			cin>>dep;
			cout<<"请输入第"<<i+1<<"个职工的性别"<<endl;
			cin>>sex;
			cout<<"请输入第"<<i+1<<"个职工的年龄"<<endl;
			cin>>age;
			cout<<"请输入第"<<i+1<<"个职工的电话号码"<<endl;
			cin>>phone;
			switch(dep)
			{
				case 1:
					worker=new EMPLOYEE(id,name,dep,sex,age,phone);
					break;
				case 2:
					worker=new MANAGER(id,name,dep,sex,age,phone);
					break;
				case 3:
					worker=new BOSS(id,name,dep,sex,age,phone);
					break;
			}
			pnum[i+this->nworker]=worker;
		}
		delete [] this->pworker;
		this->pworker=pnum;
		this->nworker=totalnum;
		this->filempty=false;
		cout<<"成功添加"<<addnum<<"人！"<<endl;
		save();
	}
	else
		cout<<"输入有误！"<<endl<<"请检查输入数目！"<<endl;
	system("pause");
	system("cls");
}

int WORKERMANAGER::getnum(void)
{
	int number;
	int id;		string name;	int dep;
	char sex;	int age;		int phone;
	ifstream ifs;
	ifs.open(FILENAME,ios::in);
	while(ifs>>id>>name>>dep>>sex>>age>>phone)
		number++;
	ifs.close();
	return number;
}

void WORKERMANAGER::setup(void)
{
	int id;		string name;	int dep;
	string sex;	int age;		string phone;
	ifstream ifs;
	ifs.open(FILENAME,ios::in);
	int index=0;	WORKER *p=NULL;
	while(ifs>>id>>name>>dep>>sex>>age>>phone)
	{
		p=NULL;
		switch(dep)
		{
			case 1:
				p=new EMPLOYEE(id,name,dep,sex,age,phone);
				break;
			case 2:
				p=new MANAGER(id,name,dep,sex,age,phone);
				break;
			case 3:
				p=new BOSS(id,name,dep,sex,age,phone);
				break;
		}
		this->pworker[index]=p;
		++index;
	}
}

void WORKERMANAGER::show(void)
{
	if(this->filempty)
		cout<<"文件不存在或记录为空！"<<endl;
	else
	{
		cout<<"编号"<<'\t'<<"姓名"<<'\t'<<"部门"<<'\t'\
			<<"性别"<<'\t'<<"年龄"<<'\t'<<"电话号码"<<endl;
		for(int i=1;i<=this->nworker;++i)
			this->pworker[i]->showinfo();
	}
	system("pause");
	system("cls");
}

void WORKERMANAGER::del(void)
{
	if(this->filempty)
		cout<<"文件不存在或记录为空！"<<endl;
	else
	{
		int id;
		cout<<"请输入将删除的职工编号："<<endl;
		cin>>id;
		int p=exist(id);
		if(p==-1)
			cout<<"不存在对应职工！"<<endl<<"请检查输入！"<<endl;
		else
		{
			delete this->pworker[p];
			for(int i=p;i<this->nworker-1;++i)
				this->pworker[i]=this->pworker[i+1];
			this->pworker[this->nworker-1]=NULL;
			this->nworker--;
			this->save();
		}
	}
	system("pause");
	system("cls");
}

int WORKERMANAGER::exist(int id)
{
	int i=0;
	for(;i<this->nworker;++i)
		if(this->pworker[i]->id==id)
			break;
	if(i==nworker)
		return -1;
	else
		return i;
}

void WORKERMANAGER::change(void)
{
	if(this->filempty)
		cout<<"文件不存在或记录为空！"<<endl;
	else
	{
		int id;
		cout<<"请输入将修改的职工编号："<<endl;
		cin>>id;
		int p=this->exist(id);
		if(p==-1)
			cout<<"不存在对应职工！"<<endl<<"请检查输入！"<<endl;
		else
		{
			int id;		string name;	int dep;
			string sex;	int age;		string phone;
			WORKER *worker=NULL;
			cout<<"查找到第"<<p+1<<"号员工"<<endl;
			cout<<"请输入第"<<p+1<<"个职工的编号"<<endl;
			cin>>id;
			cout<<"请输入第"<<p+1<<"个职工的姓名"<<endl;
			cin>>name;
			cout<<"请输入第"<<p+1<<"个职工的部门编号"<<endl;
			cout<<"1：普通员工"<<endl\
				<<"2：经理"<<endl\
				<<"3：老板"<<endl;
			cin>>dep;
			cout<<"请输入第"<<p+1<<"个职工的性别"<<endl;
			cin>>sex;
			cout<<"请输入第"<<p+1<<"个职工的年龄"<<endl;
			cin>>age;
			cout<<"请输入第"<<p+1<<"个职工的电话号码"<<endl;
			cin>>phone;
			switch(dep)
			{
				case 1:
					worker=new EMPLOYEE(id,name,dep,sex,age,phone);
					break;
				case 2:
					worker=new MANAGER(id,name,dep,sex,age,phone);
					break;
				case 3:
					worker=new BOSS(id,name,dep,sex,age,phone);
					break;
			}
			delete this->pworker[p];
			pworker[p]=worker;
			this->save();
		}
	}
	system("pause");
	system("cls");
}

void WORKERMANAGER::search(void)
{
	if(this->filempty)
		cout<<"文件不存在或记录为空！"<<endl;
	else
	{
		cout<<""<<endl<<""<<endl<<""<<endl;
		int index;
		cin>>index;
		if(index==1)
		{
			int id;
			cout<<"请输入将查找的职工编号："<<endl;
			cin>>id;
			int p=this->exist(id);
			if(p==-1)
				cout<<"不存在对应职工！"<<endl<<"请检查输入！"<<endl;
			else
			{
				cout<<"编号"<<'\t'<<"姓名"<<'\t'<<"部门"<<'\t'\
					<<"性别"<<'\t'<<"年龄"<<'\t'<<"电话号码"<<endl;
				this->pworker[p]->showinfo();
			}
		}
		else if(index==2)
		{
			string name;
			cout<<"请输入将查找的职工姓名："<<endl;
			cin>>name;
			bool flag=false;
			for(int i=0;i<this->nworker;++i)
				if(this->pworker[i]->name==name)
					flag=true;
			if(!flag)
				cout<<"不存在对应职工！"<<endl<<"请检查输入！"<<endl;
			else
			{
				cout<<"编号"<<'\t'<<"姓名"<<'\t'<<"部门"<<'\t'\
					<<"性别"<<'\t'<<"年龄"<<'\t'<<"电话号码"<<endl;
				for(int i=0;i<this->nworker;++i)
					if(this->pworker[i]->name==name)
						this->pworker[i]->showinfo();
			}
		}
		else
		{
			cout<<"不存在对应查找方式！"<<endl<<"请检查输入！"<<endl;
		}
	}
	system("pause");
	system("cls");
}

void WORKERMANAGER::sort(void)
{
	if(this->filempty)
		cout<<"文件不存在或记录为空！"<<endl;
	else
	{
		
	}
	system("pause");
	system("cls");
}

void WORKERMANAGER::clean(void)
{
	cout<<"确认清空？"<<endl
		<<"1：确认"<<endl
		<<"0：返回"<<endl;
	int index;
	cin>>index;
	if(index==1)
	{
		ofstream ofs;
		ofs.open(FILENAME,ios::trunc);
		ofs.close();
		if(!this->filempty)
		{
			for(int i=0;i<this->nworker;++i)
				if(!this->pworker[i])
					delete this->pworker[i],this->pworker[i]=NULL;
			delete [] this->pworker;
			this->pworker=NULL;
			this->nworker=0;
			this->filempty=true;
		}
		cout<<"清空成功！"<<endl;
	}
	system("pause");
	system("cls");
}
