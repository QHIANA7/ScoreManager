#pragma once
#include <iostream>
#include "Arraylist.h"
#include "Student.h"
using namespace std;

class CTRL
{
	Arraylist *slist;
public:
	CTRL();
	~CTRL();
public:
	void Insert();
	void Update();
	void Search();
	void Delete();
	void SelectAll();

};

