#include "speechManager.h"
using namespace std;

SpeechManager::SpeechManager() {
	this->initSpeech();
} 

SpeechManager::~SpeechManager() {}

void SpeechManager::showMenu() {
	cout << "***********************************" << endl;
	cout << "********                     ******" << endl;
	cout << "********   ��ӭ�μ��ݽ�����  ******" << endl;
	cout << "********    1.��ʼ�ݽ�����   ******" << endl;
	cout << "********    2.�鿴�����¼   ******" << endl;
	cout << "********    3.��ձ�����¼   ******" << endl;
	cout << "********    0.�˳���������   ******" << endl;
	cout << "********                     ******" << endl;
	cout << "***********************************" << endl;
	cout << endl;
}

void SpeechManager::exitSystem() {
	cout << "��ӭ�´�ʹ�ã�" << endl;
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
								Speaker("ѡ��" + nameSeed[i])));
	}
}

