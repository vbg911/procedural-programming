#include <iostream>

using namespace std;
void task1();
float getNumber();

void equation() {
	float  b, c, x;
	system("cls");
	cout << "������ ����������\n\n";
	cout << "������� ��������� ���� bx + c = 0\n\n";
	cout << "������� b = ";
	b = getNumber();
	cout << "������� c = ";
	c = getNumber();
	cout << "\n===================\n\n";
	if (c == 0)
	{
		cout << "��������� " << b << "x = 0\n" << "x = 0\n\n\n";
	}
	else
	{
		if (c > 0)
		{
			cout << "��������� " << b << "x + " << c << " = 0" << endl;
		}
		else
		{
			cout << "��������� " << b << "x - " << abs(c) << " = 0" << endl;
		}
		x = -c / b;
		cout << "x =" << x << "\n\n\n";
	}
	system("pause");
	task1();
}