#include <iostream>
#include "Manager.h"
using namespace std;

Manager::Manager() {
	this->name = string();
	this->password = string();
}

Manager::~Manager() {
}

Manager::Manager(string name, string password) {
	this->name = string(name);
	this->password = string(password);
}

void Manager::addPerson() {

}

void Manager::showPerson() {

}

void Manager::showComputer() {

}

void Manager::clearFile() {

}
