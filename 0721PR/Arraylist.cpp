#include "Arraylist.h"


Arraylist::Arraylist(int max)
{
	this->max = max;
	size = 0;
	arr = new void*[max];	//동적할당
}

Arraylist::~Arraylist()
{
	delete[] arr;
}

void Arraylist::pushBack(void * data)
{
	if (isOverflow())
	{
		cout << "저장공간 초과! [최대값] " << max << " : " << size << " [현재크기]" << endl;
		
	}
	else
	{
		arr[size] = data;
		cout << "저장되었습니다." << endl;
		size++;
	}
}

bool Arraylist::DeleteData(int idx)
{
	if (0 <= idx && idx <= size)
	{
		delete arr[idx];
		for (int i = idx; i < size - 1; i++)
		{
			arr[idx] = arr[idx + 1];
		}
		size--;
		return true;
	}
	else
		return false;

}

bool Arraylist::isOverflow()
{
	if (max <= size)
		return true;
	else
		return false;
}
