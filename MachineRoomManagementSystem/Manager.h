#pragma once
#include <iostream>
#include "Identity.h"
using namespace std;

class Manager : public Identity {
	public:
		Manager();
		~Manager();
		Manager(string name, string password);

		virtual void printMenu();

		void addPerson();
		void showPerson();
		void showComputer();
		void clearFile();
};
