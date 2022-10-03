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
		
		vector<int> vFlow1;			// 初始、第一轮开始前：12
		vector<int> vFlow2;			// 第一轮结束、第二轮开始前：6
		vector<int> vVictory;		// 第二轮结束、冠军：3
		
		map<int, Speaker> mSpeaker;		// 存储选手
		
		int flow;					// 记录轮数
		
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
