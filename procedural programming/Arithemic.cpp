#include <iostream>

using namespace std;
void task1();
float getNumber();

void arithmetic() {
	float num1, num2;
	system("cls");
	cout << "������ �����������\n\n";
	cout << "�������������� �������� ��� ����� �������\n\n";
	cout.precision(3);
	cout << "������� ������ ����� = ";
	num1 = getNumber();
	cout << "������� ������ ����� = ";
	num2 = getNumber();
	cout << "\n=========================\n";
	cout << "����� ����� = " << num1 + num2 << endl;
	cout << "�������� ����� = " << num1 - num2 << endl;
	cout << "������������ ����� = " << num1 * num2 << endl;
	if (num2 == 0)
	{
		cout << " ������ ����� ����� = 0. ��������� ������� ����������.";
	}
	else
	{
		cout << "������� �� ������� ����� = " << num1 / num2 << endl;
	}
	cout << "\n\n\n";
	system("pause");
	task1();
}