#pragma once

#include<iostream>
#include<cstdlib>
#include<vector>
#include<map>
#include "speaker.h"
using namespace std;

class SpeechManager {
	public:
		
		SpeechManager();
		
		~SpeechManager();
		
		void showMenu();
		
		void exitSystem();
		
		vector<int> vFlow1;		// 12
		vector<int> vFLow2;		// 6
		vector<int> vVictory;	// 3
		
		map<int, Speaker> mSpeaker;
		
		int flow;
		
		void initSpeech();
		
		void creatSpeaker();
};
