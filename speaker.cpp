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
	if((this->name).length() != 0) {
		this->name = "";
	}
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
	return this->score;
}

void Speaker::setName(string name) {
	if((this->name).length() != 0) {
		this->name = "";
	}
	this->name = string(name);
}
void Speaker::setScore_1(double score1) {
	(this->score)[0] = score1;
}
void Speaker::setScore_2(double score2) {
	(this->score)[1] = score2;
}
void Speaker::setScore(double score1, double score2) {
	this->setScore_1(score1);
	this->setScore_2(score2);
}
void Speaker::setScore(double * score) {
	this->setScore_1(score[0]);
	this->setScore_2(score[1]);
}

