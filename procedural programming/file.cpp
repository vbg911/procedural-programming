#include <iostream>
#include <fstream>
#include <windows.h>

using namespace std;
void task4();
bool writefile(string filename);
bool printfile(string filename);

void file() {
	string filename;
	system("cls");
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	cout << "������ �����. \n������� ����, �������� � ���� 10 �����, �������, ����� ����� ������� ���� � ����� ����� �����.\n\n" << endl;
	cout << "������� �������� �����." << endl;
	cin >> filename;
	filename = filename + ".txt";
	writefile(filename);
	printfile(filename);
	system("pause");
	task4();
}


bool writefile(string filename) {
	ofstream os(filename);
	if (!os)
	{
		cout << "�� ������� ������� ����.\n";
		return false;
	}
	double num;
	for (int i = 0; i < 10; i++)
	{
		cout << "������� " << i + 1<<" �����.\n";
		cin >> num;
		os << num << endl;
	}
	os.close();
	cout << "������ � ���� '" << filename << "' ���������.\n" << endl;
	return true;
}


bool printfile(string filename) {
	ifstream is(filename);
	if (!is)
		return false;
	double n, sum = 0.0;
	for (int i = 1; i <= 10; i++) {
		is >> n;
		sum += n;
	}
	is.close();
	cout << "����� ����� �� ����� '" << filename << "' ����� " <<sum<< endl;
	return true;
}