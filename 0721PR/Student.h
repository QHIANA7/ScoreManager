#pragma once
#include <iostream>
using namespace std;

class Student
{
	string name;
	int stdnum;
	int score;
public:
	Student();
	Student(string _name, int _stdnum, int _score);
	~Student();
public:
	string getName() { return name; }
	int getStdNum() { return stdnum; }
	int getScore() { return score; }

	void setName(string value) { name = value; }
	void setStdNum(int value) { stdnum = value; }
	void setScore(int value) { score = value; }
public:
	void Print();

};

