#include <iostream>

using namespace std;
void task4();
string sign();

void NumberSign() {
	system("cls");
	cout << "������ ����� �����.\n ���������� ���� ���������� � ���������� �����, ����������� ������������ ������� \n\n";
	cout << sign();
	system("pause");
	task4();
}

string sign() {
	double num;
	string output;
	cout << "������� �����: ";
	cin >> num;
	if (num > 0) {
		output = "����� �������������.\n";
		return output;
	}
	else if (num < 0) {
		output = "����� �������������.\n";
		return output;
	}
	else {
		output = "����� ����� ����.\n";
		return output;
	}

}