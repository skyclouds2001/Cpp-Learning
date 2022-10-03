#pragma once

#include<string>
using namespace std;

class Speaker {
	public:
		Speaker();
		Speaker(string name);
		Speaker(string name, double * score);
		Speaker(string name, double score1, double score2);
		
		~Speaker();
		
		string getName();
		
		double getScore_1();
		double getScore_2();
		double * getScore();
		
		void setName(string name);
		
		void setScore_1(double score1);
		void setScore_2(double score2);
		void setScore(double score1, double score2);
		void setScore(double * score1);
		
	private:
		string name;
		double score[2];
};
