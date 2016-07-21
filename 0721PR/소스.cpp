#include <iostream>
#include "CTRL.h"
using namespace std;


int main()
{
	int num;
	CTRL *c = new CTRL();

	while (true)
	{
		system("cls");
		c->SelectAll();
		cout << "\n===================================================" << endl;
		cout << "[1]입력 [2]검색 [3]수정 [4]삭제 [5]로그보기 [6]종료" << endl;
		cout << "===================================================" << endl;
		cin >> num;
		switch (num)
		{
		case 1:c->Insert();break;
		case 2:c->Search();break;
		case 3:c->Update();break;
		case 4:c->Delete();break;
		case 5:delete c;return 0;
		}
		system("pause");
		
	}
	delete c;
	return 0;
}