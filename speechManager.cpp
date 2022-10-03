#include "speechManager.h"
using namespace std;

SpeechManager::SpeechManager() {
	this->initSpeech();
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
	(this->vFLow2).clear();
	(this->vVictory).clear();
	(this->mSpeaker).clear();
	
	this->flow = 1;
}

void SpeechManager::creatSpeaker() {
	string nameSeed = "ABCDEFGHIJKL";
	
	for(int i = 0; i < nameSeed.length(); ++i) {
		(this->vFlow1).push_back(i + 100001);
		(this->mSpeaker).insert(make_pair(i + 100001, 
								Speaker("选手" + nameSeed[i])));
	}
}

