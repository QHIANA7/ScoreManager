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
		cout << "[1]�Է� [2]�˻� [3]���� [4]���� [5]�α׺��� [6]����" << endl;
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