#include <iostream>
#include <fstream>

using namespace std;
void task3();


void CopyingFile() {
	system("cls");
	cout << "������� �� ����� ��������� ���� � ����������� ��� �� �����.\n------------------------------" << endl;
	cout << "�������� ����� � ��������� 'CopyingFile'" << endl;
	ofstream fout("CopyingFile.txt");
	cout << "���� ������� ������." << endl;
	ifstream fin("Copy");
	fout.close();
	system("pause");
	task3();
}