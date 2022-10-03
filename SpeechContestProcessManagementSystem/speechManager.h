#pragma once

#include <iostream>
#include<fstream>
#include <algorithm>
#include <cstdlib>
#include <vector>
#include <map>
#include <deque>
#include <numeric>
#include <functional>
#include "speaker.h"
using namespace std;

class SpeechManager {
	public:
		
		SpeechManager();
		
		~SpeechManager();
		
		void showMenu();
		
		void exitSystem();
		
		vector<int> vFlow1;			// ��ʼ����һ�ֿ�ʼǰ��12
		vector<int> vFlow2;			// ��һ�ֽ������ڶ��ֿ�ʼǰ��6
		vector<int> vVictory;		// �ڶ��ֽ������ھ���3
		
		map<int, Speaker> mSpeaker;		// �洢ѡ��
		
		int flow;					// ��¼����
		
		void initSpeech();
		
		void creatSpeaker();

		void startSpeech();

		void speechDraw();

		void speechContest();

		void showScore();

		void saveRecord();

		bool fileIsEmpty;

		void loadRecord();

		map<int, vector<string>> record;

		void showRecord();

		void clearRecord();
};
