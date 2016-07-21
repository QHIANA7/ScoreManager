#include "Student.h"



Student::Student()
{
}

Student::Student(string _name, int _stdnum, int _score)
	:name(_name), stdnum(_stdnum), score(_score)
{
}


Student::~Student()
{
}

void Student::Print()
{
	printf("[이름] %-10s [학번] %-10d [점수] %-5d\n", name.c_str(), stdnum, score);
}
