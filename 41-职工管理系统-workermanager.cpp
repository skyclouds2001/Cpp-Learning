#include"41-ְ������ϵͳ-workermanager.h"
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
	cout<<"******** ��ӭʹ��ְ������ϵͳ��*********"<<endl;
	cout<<"*********** 1�����ְ����Ϣ ************"<<endl;
	cout<<"*********** 2����ʾְ����Ϣ ************"<<endl;
	cout<<"*********** 3��ɾ��ְ����Ϣ ************"<<endl;
	cout<<"*********** 4���޸�ְ����Ϣ ************"<<endl;
	cout<<"*********** 5������ְ����Ϣ ************"<<endl;
	cout<<"*********** 6��ְ����Ϣ���� ************"<<endl;
	cout<<"*********** 7�����������Ϣ ************"<<endl;
	cout<<"*********** 0���˳�����ϵͳ ************"<<endl;
	cout<<"****************************************"<<endl;
	cout<<"________________________________________"<<endl;
	cout<<endl;
}

void WORKERMANAGER::exitsystem(void)
{
	cout<<"________________________________________"<<endl; 
	cout<<"****************************************"<<endl;
	cout<<"�����˳�ϵͳ��"<<endl;
	cout<<"��ӭ�´�ʹ��ְ����Ϣ����ϵͳ"<<endl;
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
	cout<<"�����ڲ�����"<<endl;
	cout<<"���������룡"<<endl;
	cout<<"****************************************"<<endl;
	cout<<"________________________________________"<<endl;
	system("pause");
	system("cls");
}

void WORKERMANAGER::addworker(void)
{
	cout<<"��������ӵ�Ա����Ŀ��"<<endl;
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
			cout<<"�������"<<i+1<<"��ְ���ı��"<<endl;
			cin>>id;
			cout<<"�������"<<i+1<<"��ְ��������"<<endl;
			cin>>name;
			cout<<"�������"<<i+1<<"��ְ���Ĳ��ű��"<<endl;
			cout<<"1����ͨԱ��"<<endl;
			cout<<"2������"<<endl;
			cout<<"3���ϰ�"<<endl;
			cin>>dep;
			cout<<"�������"<<i+1<<"��ְ�����Ա�"<<endl;
			cin>>sex;
			cout<<"�������"<<i+1<<"��ְ��������"<<endl;
			cin>>age;
			cout<<"�������"<<i+1<<"��ְ���ĵ绰����"<<endl;
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
		cout<<"�ɹ����"<<addnum<<"�ˣ�"<<endl;
		save();
	}
	else
		cout<<"��������"<<endl<<"����������Ŀ��"<<endl;
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
		cout<<"�ļ������ڻ��¼Ϊ�գ�"<<endl;
	else
	{
		cout<<"���"<<'\t'<<"����"<<'\t'<<"����"<<'\t'\
			<<"�Ա�"<<'\t'<<"����"<<'\t'<<"�绰����"<<endl;
		for(int i=1;i<=this->nworker;++i)
			this->pworker[i]->showinfo();
	}
	system("pause");
	system("cls");
}

void WORKERMANAGER::del(void)
{
	if(this->filempty)
		cout<<"�ļ������ڻ��¼Ϊ�գ�"<<endl;
	else
	{
		int id;
		cout<<"�����뽫ɾ����ְ����ţ�"<<endl;
		cin>>id;
		int p=exist(id);
		if(p==-1)
			cout<<"�����ڶ�Ӧְ����"<<endl<<"�������룡"<<endl;
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
		cout<<"�ļ������ڻ��¼Ϊ�գ�"<<endl;
	else
	{
		int id;
		cout<<"�����뽫�޸ĵ�ְ����ţ�"<<endl;
		cin>>id;
		int p=this->exist(id);
		if(p==-1)
			cout<<"�����ڶ�Ӧְ����"<<endl<<"�������룡"<<endl;
		else
		{
			int id;		string name;	int dep;
			string sex;	int age;		string phone;
			WORKER *worker=NULL;
			cout<<"���ҵ���"<<p+1<<"��Ա��"<<endl;
			cout<<"�������"<<p+1<<"��ְ���ı��"<<endl;
			cin>>id;
			cout<<"�������"<<p+1<<"��ְ��������"<<endl;
			cin>>name;
			cout<<"�������"<<p+1<<"��ְ���Ĳ��ű��"<<endl;
			cout<<"1����ͨԱ��"<<endl\
				<<"2������"<<endl\
				<<"3���ϰ�"<<endl;
			cin>>dep;
			cout<<"�������"<<p+1<<"��ְ�����Ա�"<<endl;
			cin>>sex;
			cout<<"�������"<<p+1<<"��ְ��������"<<endl;
			cin>>age;
			cout<<"�������"<<p+1<<"��ְ���ĵ绰����"<<endl;
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
		cout<<"�ļ������ڻ��¼Ϊ�գ�"<<endl;
	else
	{
		cout<<""<<endl<<""<<endl<<""<<endl;
		int index;
		cin>>index;
		if(index==1)
		{
			int id;
			cout<<"�����뽫���ҵ�ְ����ţ�"<<endl;
			cin>>id;
			int p=this->exist(id);
			if(p==-1)
				cout<<"�����ڶ�Ӧְ����"<<endl<<"�������룡"<<endl;
			else
			{
				cout<<"���"<<'\t'<<"����"<<'\t'<<"����"<<'\t'\
					<<"�Ա�"<<'\t'<<"����"<<'\t'<<"�绰����"<<endl;
				this->pworker[p]->showinfo();
			}
		}
		else if(index==2)
		{
			string name;
			cout<<"�����뽫���ҵ�ְ��������"<<endl;
			cin>>name;
			bool flag=false;
			for(int i=0;i<this->nworker;++i)
				if(this->pworker[i]->name==name)
					flag=true;
			if(!flag)
				cout<<"�����ڶ�Ӧְ����"<<endl<<"�������룡"<<endl;
			else
			{
				cout<<"���"<<'\t'<<"����"<<'\t'<<"����"<<'\t'\
					<<"�Ա�"<<'\t'<<"����"<<'\t'<<"�绰����"<<endl;
				for(int i=0;i<this->nworker;++i)
					if(this->pworker[i]->name==name)
						this->pworker[i]->showinfo();
			}
		}
		else
		{
			cout<<"�����ڶ�Ӧ���ҷ�ʽ��"<<endl<<"�������룡"<<endl;
		}
	}
	system("pause");
	system("cls");
}

void WORKERMANAGER::sort(void)
{
	if(this->filempty)
		cout<<"�ļ������ڻ��¼Ϊ�գ�"<<endl;
	else
	{
		
	}
	system("pause");
	system("cls");
}

void WORKERMANAGER::clean(void)
{
	cout<<"ȷ����գ�"<<endl
		<<"1��ȷ��"<<endl
		<<"0������"<<endl;
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
		cout<<"��ճɹ���"<<endl;
	}
	system("pause");
	system("cls");
}
