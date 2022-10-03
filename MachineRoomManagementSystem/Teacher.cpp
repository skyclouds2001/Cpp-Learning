#include <iostream>
#include "Teacher.h"
using namespace std;

Teacher::Teacher() {
	this->id = 0;
	this->name = string();
	this->password = string();
}

Teacher::~Teacher() {
}

Teacher::Teacher(int id, string name, string password) {
	this->id = id;
	this->name = string(name);
	this->password = string(password);
}

void Teacher::validOrder() {

}

void Teacher::showAllOrder() {

}

