#include "CTRL.h"

CTRL::CTRL()
{
	int max;

	cout << "�ִ� ������� : ";
	cin >> max;
	slist = new Arraylist(max);
}

CTRL::~CTRL()
{
	delete slist;
}

void CTRL::Insert()
{
	char name[20];
	int stdnum, score;
	
	while (getchar() != '\n');
	cout << "�л� �̸� �Է� : ";
	cin.getline(name, sizeof(name));
	cout << "�л� ��ȣ �Է� : ";
	cin >> stdnum;
	cout << "�л� ���� �Է� : ";
	cin >> score;

	Student *s = new Student(name, stdnum, score);
	slist->pushBack(s);
}

void CTRL::Update()
{
}

void CTRL::Search()
{
	char name[20];

	while (getchar() != '\n');
	cout << "ã�� �л� �̸� �Է� : ";
	cin.getline(name, sizeof(name));

	for (int i = 0; i < slist->getSize(); i++)
	{
		Student *s = (Student*)slist->getData(i);
		if (strcmp(name, s->getName().c_str()) == 0)
		{
			printf("[�ε���] %-02d\n", i);
			s->Print();
		}
	}

}

void CTRL::Delete()
{
	char name[20];

	while (getchar() != '\n');
	cout << "ã�� �л� �̸� �Է� : ";
	cin.getline(name, sizeof(name));

	for (int i = 0; i < slist->getSize(); i++)
	{
		Student *s = (Student*)slist->getData(i);
		if (strcmp(name, s->getName().c_str()) == 0)
		{
			if (slist->DeleteData(i))
			{
				cout << i << "��° �����͸� �����Ͽ����ϴ�." << endl;
				return;
			}
			
		}	
	}
		cout << "�ش簪�� ã�� �� �����ϴ�." << endl;
}

void CTRL::SelectAll()
{
	for (int i = 0; i < slist->getSize(); i++)
	{
		Student *s = (Student*)slist->getData(i);
		
		printf("[%02d] ", i); s->Print();
	}
}
