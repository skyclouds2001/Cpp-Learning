#pragma once
#include <iostream>
#include <string>
using namespace std;

class Identity {
	public:
		virtual void printMenu() = 0;

		string name;
		string password;
};
