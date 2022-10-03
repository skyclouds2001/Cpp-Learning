#include<iostream>
#include "Student.h"
using namespace std;

Student::Student() {
	this->id = 0;
	this->name = string();
	this->password = string();
}
Student::~Student() {
}
Student::Student(int id, string name, string password) {
	this->id = id;
	this->name = string(name);
	this->password = string(password);
}

void Student::applyOrder() {

}

void Student::showMyOrder() {

}

void Student::showAllOrder() {

}

void Student::cancelOrder() {

}
