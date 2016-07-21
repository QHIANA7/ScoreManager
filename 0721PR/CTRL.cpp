#include "CTRL.h"

CTRL::CTRL()
{
	int max;

	cout << "최대 저장공간 : ";
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
	cout << "학생 이름 입력 : ";
	cin.getline(name, sizeof(name));
	cout << "학생 번호 입력 : ";
	cin >> stdnum;
	cout << "학생 점수 입력 : ";
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
	cout << "찾을 학생 이름 입력 : ";
	cin.getline(name, sizeof(name));

	for (int i = 0; i < slist->getSize(); i++)
	{
		Student *s = (Student*)slist->getData(i);
		if (strcmp(name, s->getName().c_str()) == 0)
		{
			printf("[인덱스] %-02d\n", i);
			s->Print();
		}
	}

}

void CTRL::Delete()
{
}

void CTRL::SelectAll()
{
	for (int i = 0; i < slist->getSize(); i++)
	{
		Student *s = (Student*)slist->getData(i);
		
		printf("[%02d] ", i); s->Print();
	}
}
