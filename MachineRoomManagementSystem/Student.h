#pragma once
#include <iostream>
#include "Identity.h"
using namespace std;

class Student : public Identity {
	public:
		Student();
		Student(int id, string name, string password);
		~Student();

		int id;

		virtual void printMenu();

		void applyOrder();
		void showMyOrder();
		void showAllOrder();
		void cancelOrder();
};
