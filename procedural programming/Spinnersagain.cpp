#include <iostream>

using namespace std;
void test();
float getNumber();

void spinnersagain() {
	long M, div, mod, count3, count4;
	count3 = 0;
	count4 = 0;
	system("cls");
	cout << "������ ������ ���������\n\n";
	cout << "������� ���������� ��������� � 3-�� ��������� � ���������� ��������� � 4-�� ���������\n\n";
	cout << "������� ��������� ���������� �������� (�������������, �����, �� ������ 2 000 000 000) M = ";
	M = getNumber();
	div = M / 7;
	mod = M % 7;
	if ((div == 0) || ((div == 1) && ((mod == 1) || (mod == 2) || (mod == 5))) || ((div == 2) && (mod == 2)))
	{
		cout << "�� �������� ���������� ��������, ���, ����� ��������� ����� �������� ���� ����� " << M;
	}
	else
	{
		switch (mod)
		{
		case 0:
			count3 = div;
			count4 = div;
			break;
		case 1:
			count3 = div - 1;
			count4 = div + 1;
			break;
		case 2:
			count3 = div - 2;
			count4 = div + 2;
			break;
		case 3:
			count3 = div + 1;
			count4 = div;
			break;
		case 4:
			count3 = div;
			count4 = div + 1;
			break;
		case 5:
			count3 = div + 2;
			count4 = div - 1;
			break;
		case 6:
			count3 = div + 2;
			count4 = div;
			break;
		default:
			break;
		}
	}

	cout << "\n=========================\n";
	cout << "���������� ��������� � 3-�� ��������� = " << count3 << endl;
	cout << "���������� ��������� � 4-�� ��������� = " << count4 << endl;

	cout << "\n\n";

	system("pause");
	test();
}