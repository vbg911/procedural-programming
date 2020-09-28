#include <iostream>
#include <fstream>
#include <windows.h>

using namespace std;
void task3();
bool writefile(string filename);
bool printfile(string filename);

void file() {
	string filename;
	system("cls");
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	cout << "������� ����, �������� � ���� 10 ����� ����� ������, �������, ����� ����� ������� ���� � ����� ����� �����.\n---------------------------------------------\n\n" << endl;
	cout << "������� �������� �����." << endl;
	cin >> filename;
	filename = filename + ".txt";
	writefile(filename);
	cout << "����� ������ �� �����'" << filename << "' �������." << endl;
	printfile(filename);
	system("pause");
	task3();
}


bool writefile(string filename) {
	ofstream os(filename);
	if (!os)
	{
		cout << "�� ������� ������� ����.\n";
		return false;
	}
	char str[80];
	cout << "������� �����. ��� �� ��������� ���� ������� '!' � ����� ������." << endl;
	cin.ignore(80, '\n');
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


bool printfile(string filename) {
	ifstream is(filename);
	if (!is)
		return false;
	char str[80];
	while (is)
	{
		is.getline(str, 100);
		cout << str << endl;
	}
	is.close();
	cout << "����� ������ �� ����� '" << filename << "' ��������." << endl;
	return true;
}