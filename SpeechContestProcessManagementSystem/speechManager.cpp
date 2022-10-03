#include "speechManager.h"
using namespace std;

SpeechManager::SpeechManager() {
	initSpeech();
} 

SpeechManager::~SpeechManager() {}

void SpeechManager::showMenu() {
	cout << "***********************************" << endl;
	cout << "********                     ******" << endl;
	cout << "********   欢迎参加演讲比赛  ******" << endl;
	cout << "********    1.开始演讲比赛   ******" << endl;
	cout << "********    2.查看往届记录   ******" << endl;
	cout << "********    3.清空比赛记录   ******" << endl;
	cout << "********    0.退出比赛程序   ******" << endl;
	cout << "********                     ******" << endl;
	cout << "***********************************" << endl;
	cout << endl;
}

void SpeechManager::exitSystem() {
	cout << "欢迎下次使用！" << endl;
	system("pause");
	exit(EXIT_SUCCESS);
}

void SpeechManager::initSpeech() {
	(this->vFlow1).clear();
	(this->vFlow2).clear();
	(this->vVictory).clear();
	(this->mSpeaker).clear();
	this->record.clear();
	
	this->flow = 1;
}

void SpeechManager::creatSpeaker() {
	string nameSeed = "ABCDEFGHIJKL";
	
	for(int i = 0; i < nameSeed.length(); ++i) {
		(this->vFlow1).push_back(i + 100001);
		(this->mSpeaker).insert(make_pair(i + 100001, Speaker(string("选手") + nameSeed[i])));
	}
}

void SpeechManager::startSpeech() {
	this->flow = 1;

	speechDraw();
	speechContest();
	showScore();

	++this->flow;

	speechDraw();
	speechContest();
	showScore();

	saveRecord();

	cout << "本届比赛结束" << endl;

	initSpeech();
	creatSpeaker();

	loadRecord();

	system("pause");
	system("cls");
}

void SpeechManager::speechDraw() {
	cout << "第" << this->flow << "轮选手正在抽签……" << endl;
	cout << "---------------------------" << endl;
	cout << "抽签后演讲顺序如下：" << endl;
	if (this->flow == 1) {
		random_shuffle(vFlow1.begin(), vFlow1.end());
		for (vector<int>::iterator it = vFlow1.begin(); it != vFlow1.end(); ++it) {
			cout << *it << " ";
		}
		cout << endl;
	}
	else if (this->flow == 2) {
		random_shuffle(vFlow2.begin(), vFlow2.end());
		for (vector<int>::iterator it = vFlow2.begin(); it != vFlow2.end(); ++it) {
			cout << *it << " ";
		}
		cout << endl;
	}
	cout << "---------------------------" << endl;
	system("pause");
}

void SpeechManager::speechContest()
{
	cout << "----------第" << this->flow << "轮比赛正式开始----------" << endl;

	multimap<double, int, greater<double>> groupScore;

	int num = 0;

	vector<int> v;
	if(this->flow == 1)
		v = this->vFlow1;
	else if(this->flow == 2)
		v = this->vFlow2;

	for (vector<int>::iterator it = v.begin(); it != v.end(); ++it) {
		++num;

		deque<double> d;

		for (int i = 0; i < 10; ++i) {
			double t = (rand() % 401 + 600) / 10.f;

			d.push_back(t);
		}

		sort(d.begin(), d.end(), greater<double>());
		d.pop_back();
		d.pop_front();

		double sum = accumulate(d.begin(),d.end(),0.f);
		double aver = sum / (double)d.size();

		if (this->flow ==1)
			((this->mSpeaker)[*it]).setScore_1(aver);
		else if (this->flow==2)
			((this->mSpeaker)[*it]).setScore_2(aver);

		groupScore.insert(make_pair(aver,*it));

		if (num % 6 == 0) {
			cout << "第" << num / 6 << "小组比赛名次：" << endl;

			for (multimap<double, int, greater<double>>::iterator it = groupScore.begin(); 
				it != groupScore.end(); ++it) {
				cout << "编号：" << it->second << "姓名：" << this->mSpeaker[it->second].getName()
					<< "成绩：" << this->mSpeaker[it->second].getScore()[this->flow - 1] << endl;
			}

			int count = 0;

			for (multimap<double, int, greater<double>>::iterator it = groupScore.begin();
				it != groupScore.end() && count < 3; ++it, ++count) {

				if (this->flow == 1)
					this->vFlow2.push_back((*it).second);
				else if (this->flow == 2)
					this->vVictory.push_back((*it).second);
			}

			groupScore.clear();
			
			cout << endl;
		}
	}
}

void SpeechManager::showScore() {
	cout << "----------第" << this->flow << "轮比赛结束----------" << endl;
	cout << "----------第" << this->flow << "轮比赛晋级信息如下：----------" << endl;
	vector<int> v;

	if (this->flow == 1)
		v = this->vFlow2;
	else if (this->flow == 2)
		v = this->vVictory;

	for (vector<int>::iterator it = v.begin(); it != v.end(); ++it) {
		cout << "编号：" << *it << "姓名：" << this->mSpeaker[*it].getName() <<
			"成绩：" << this->mSpeaker[*it].getScore()[this->flow - 1] << endl;
	}
	cout << endl;

	system("pause");
	system("cls");
	this->showMenu();
}

void SpeechManager::saveRecord() {
	ofstream ofs;
	ofs.open("speech.csv", ios::out | ios::app);

	for (vector<int>::iterator it = vVictory.begin(); it != vVictory.end(); ++it) {
		ofs << *it << "," << mSpeaker[*it].getScore_2() << ",";
	}
	ofs << endl;

	ofs.close();
	cout << "记录已经保存" << endl;

	this->fileIsEmpty = false;
}

void SpeechManager::loadRecord() {
	ifstream ifs;
	ifs.open("speech.csv", ios::in);

	if (!ifs.is_open()) {
		this->fileIsEmpty = true;
		//cout << "文件不存在！" << endl;
		ifs.close();
		return;
	}

	char c;
	ifs >> c;
	if (ifs.eof()) {
		this->fileIsEmpty = true;
		//cout << "文件为空！" << endl;
		ifs.close();
		return;
	}

	this->fileIsEmpty = false;

	ifs.putback(c);

	string data;
	int index = 0;
	while (ifs >> data) {
		vector<string> v;

		int pos = -1;
		int start = 0;

		while (true) {
			pos = data.find(",", start);
			if (pos == -1) {
				break;
			}

			string tmp = data.substr(start, pos - start);
			v.push_back(tmp);
			start = pos + 1;
		}

		this->record.insert(make_pair(index, v));
		++ index;
	}

	ifs.close();
}

void SpeechManager::showRecord()
{
	if (this->fileIsEmpty) {
		cout << "文件不存在或文件为空！" << endl;
	}

	for (int i = 0; i < this->record.size(); ++i) {
		cout << "第" << i + 1 << "届：" << endl;
		cout << "\t\t冠军编号：" << this->record[i][0] 
			<< "\t\t得分：" << this->record[i][1] << endl;
		cout << "\t\t亚军编号：" << this->record[i][2]
			<< "\t\t得分：" << this->record[i][3] << endl;
		cout << "\t\t季军编号：" << this->record[i][4]
			<< "\t\t得分：" << this->record[i][5] << endl;
		cout << endl;
	}
	cout << endl;
	
	system("pause");
	system("cls");
}

void SpeechManager::clearRecord()
{
	cout << "确认清空？" << endl << "确认：1" << endl << "返回：2" << endl;

	int select = 0;
	cin >> select;

	if (select == 1) {
		ofstream ofs;

		ofs.open("speech.csv", ios::trunc);
		ofs.close();

		this->initSpeech();
		this->creatSpeaker();
		this->loadRecord();

		cout << "清空成功！" << endl;
	}

	system("pause");
	system("cls");
}
