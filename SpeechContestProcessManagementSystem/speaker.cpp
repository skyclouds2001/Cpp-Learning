#include "speaker.h"
using namespace std;

Speaker::Speaker() {
	this->name = "";
	(this->score)[0] = 0;
	(this->score)[1] = 0;
}
Speaker::Speaker(string name) {
	this->name = string(name);
	(this->score)[0] = 0;
	(this->score)[1] = 0;
}
Speaker::Speaker(string name, double * score) {
	this->name = string(name);
	(this->score)[0] = score[0];
	(this->score)[1] = score[1];
}
Speaker::Speaker(string name, double score1, double score2) {
	this->name = string(name);
	(this->score)[0] = score1;
	(this->score)[1] = score2;
}
Speaker::~Speaker() {
	this->name = "";
	(this->score)[0] = 0;
	(this->score)[1] = 0;
}

string Speaker::getName() {
	return string(this->name);
}
double Speaker::getScore_1() {
	return (this->score)[0];
}
double Speaker::getScore_2() {
	return (this->score)[1];
}
double * Speaker::getScore() {
	double * pos = new double[2];
	pos[0] = getScore_1();
	pos[1] = getScore_2();
	return pos;
}

void Speaker::setName(string name) {
	this->name = string(name);
}
void Speaker::setScore_1(double score1) {
	(this->score)[0] = score1;
}
void Speaker::setScore_2(double score2) {
	(this->score)[1] = score2;
}
void Speaker::setScore(double score1, double score2) {
	setScore_1(score1);
	setScore_2(score2);
}
void Speaker::setScore(double * score) {
	setScore_1(score[0]);
	setScore_2(score[1]);
}

