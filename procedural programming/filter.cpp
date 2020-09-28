#include <iostream>
#include <fstream>
#include <windows.h>

using namespace std;
void task3();
bool Writefile(string filename);
bool Printfile(string filename);


void filter() {
	string filename;
	system("cls");
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	cout << "������� �� ����� ������ ����� �� ���������� ���� �� ����� ���������� �����, ����������� ����� � �����.\n---------------------------------------------\n\n" << endl;
	cout << "������� �������� �����." << endl;
	cin >> filename;
	filename = filename + ".txt";
	Writefile(filename);
	Printfile(filename);
	system("pause");
	task3();
}

bool Writefile(string filename) {
	ofstream os(filename);
	if (!os)
	{
		cout << "�� ������� ������� ����.\n";
		return false;
	}
	char str[80];
	cout << "������� �����. ��� �� ��������� ���� ������� '!' � ����� ������." << endl;
	do
	{
		cin.getline(str, 80);
		if (*str != '!') {
			os << str << endl;
		}
	} while (*str != '!');
	os.close();
	cout << "������ � ���� '" << filename << "' ���������.\n" << endl;
	return true;
}

bool Printfile(string filename) {
	char curentsymbol;
	ifstream is(filename);
	if (!is)
		return false;
	char str[80];
	cin.ignore(80, '\n');
	while (is)
	{
		is.getline(str, 80);
		for (int i = 0; i < 80; i++) {
			curentsymbol = str[i];
			if (isdigit(curentsymbol)) {
				cout << curentsymbol;
			}
		}
		cout << "\n";
		memset(str, 0, sizeof str);
	}
	is.close();
	cout << "����� ������ �� ����� '" << filename << "' ��������." << endl;
	return true;
}

