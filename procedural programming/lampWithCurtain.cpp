#include <iostream>

using namespace std;
void task1();


void lampWithCurtain() {
	string isDay, isCurtainOpen, isLampOn;
	bool day, curtain, lamp;
	system("cls");
	cout << "�� ����� ����? ����� ��������? ����� ��������?\n";
	cout << "������� true/false 3 ���� ����� ������.\n";
	cin >> isDay >> isCurtainOpen >> isLampOn;
	if (isDay == "true") {
		day = true;
	}
	else if (isDay == "false") {
		day = false;
	}
	else
	{
		cout << "����� ����� �� ����������. �� ��������� ����� ������������ �������� 'false'.\n";
		day = false;
	}

	if (isCurtainOpen == "true") {
		curtain = true;
	}
	else if (isCurtainOpen == "false") {
		curtain = false;
	}
	else
	{
		cout << "��������� ���� �� ����������. �� ��������� ����� ������������ �������� 'false'.\n";
		curtain = false;
	}

	if (isLampOn == "true") {
		lamp = true;
	}
	else if (isLampOn == "false") {
		lamp = false;
	}
	else
	{
		cout << "��������� ����� �� ����������. �� ��������� ����� ������������ �������� 'false'.\n";
		lamp = false;
	}

	cout << "�� ����� ����? " << boolalpha << day << "\n" << "����� �������? " << boolalpha << curtain << "\n" << "����� ��������? " << boolalpha << lamp << endl;
	if (day && curtain) {
		cout << "� �������� ������!" << endl;
	}
	else if (lamp) {
		cout << "� �������� ������!" << endl;
	}
	else {
		cout << "� �������� �����!" << endl;
	}

	system("pause");
	task1();
}
