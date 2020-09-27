#include <iostream>
#include <fstream>

using namespace std;
void task3();
bool WriteFile(string filename);
bool PrintFile(string filename);

void CopyingFile() {
	string filename;
	system("cls");
	cout << "������� �� ����� ��������� ���� � ����������� ��� �� �����.\n---------------------------------------------\n\n" << endl;
	cout << "������� �������� ����� � ��� ����������." << endl;
	cin >> filename;
	WriteFile(filename);
	cout << "����� ������ �� �����'" << filename << "' �������." << endl;
	PrintFile(filename);
	system("pause");
	task3();
}

bool WriteFile(string filename) {
	ofstream os(filename);
	if (!os)
	{
		cout << "�� ������� ������� ����.\n";
		return false;
	}
	char str[80];
	cout << "������� �����. ��� �� ��������� ���� ������� '!' "<< endl;
	do
	{
		cin.getline(str, 80);
		os << str << endl; 
	} while (*str != '!'); 
	os.close(); 
	cout << "������ � ���� '"<<filename<<"' ���������.\n" << endl;
	return true;
}

bool PrintFile(string filename) {
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