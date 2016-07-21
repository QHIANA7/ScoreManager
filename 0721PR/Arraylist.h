#pragma once
#include <iostream>
using namespace std;

class Arraylist	//� ������ �ּҸ� ��� ���� �迭 ����
{
	void **arr;
	int max;	//�ִ밪
	int size;	//���簪
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

