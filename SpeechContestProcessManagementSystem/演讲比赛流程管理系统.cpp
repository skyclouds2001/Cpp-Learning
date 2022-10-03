#include <iostream>
#include "speechManager.h"
using namespace std;

int main(int argc, char const *argv[])
{
	SpeechManager sm;
	
	sm.initSpeech();
	
	sm.creatSpeaker();

	sm.loadRecord();

	while(true) {
		sm.showMenu();
		
		cout << "ÇëÊäÈëÄúµÄÑ¡Ôñ£º" << endl;
		int choice = -1;
		
		cin >> choice;
		
		switch(choice) {
			case 1:
				sm.startSpeech();
				break;
			case 2:
				sm.showRecord();
				break;
			case 3:
				sm.clearRecord();
				break;
			case 0:
				sm.exitSystem();
				break;
			default:
				system("cls");
				break;
		}
	}
	
	return 0;
} 
