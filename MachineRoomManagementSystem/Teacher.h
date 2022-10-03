#pragma once
#include <iostream>
#include "Identity.h"
using namespace std;

class Teacher : public Identity {
	public:
		Teacher();
		~Teacher();
		Teacher(int id, string name, string password);

		int id;

		virtual void printMenu();

		void validOrder();
		void showAllOrder();
};
