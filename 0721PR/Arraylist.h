#pragma once
#include <iostream>
using namespace std;

class Arraylist	//어떤 형식의 주소를 담는 동적 배열 공간
{
	void **arr;
	int max;	//최대값
	int size;	//현재값
public:
	Arraylist(int max = 10);
	~Arraylist();
public:
	int getSize() { return size; }
	int getMax() { return max; }
	void* getData(int idx) { return arr[idx]; }
public:
	void pushBack(void* data);
	bool DeleteData(int idx);
private:
	bool isOverflow();
	
};

