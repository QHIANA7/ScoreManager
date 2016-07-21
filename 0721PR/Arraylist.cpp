#include "Arraylist.h"


Arraylist::Arraylist(int max)
{
	this->max = max;
	size = 0;
	arr = new void*[max];	//�����Ҵ�
}

Arraylist::~Arraylist()
{
	delete[] arr;
}

void Arraylist::pushBack(void * data)
{
	if (isOverflow())
	{
		cout << "������� �ʰ�! [�ִ밪] " << max << " : " << size << " [����ũ��]" << endl;
		
	}
	else
	{
		arr[size] = data;
		cout << "����Ǿ����ϴ�." << endl;
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
