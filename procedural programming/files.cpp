//15 ������
#include <fstream>
#include <iostream>
#include <string> 
using namespace std;
void task5();
double to_dec(string intnum, int ss1);
double to_dec_frac(string fracnum, int ss1);
string from_dec(double dec, int newsys);
string from_dec_farc(double decfrac, int newsys);


void processing_file() {
	system("cls");
	int nums, numbersystem;
	string decnum ,readnum;
	cout << "������� ���� �� N ������������ ����� � ���������� ������� ���������.\n� ������ ���� �������� ��� �����, ������������ �� ��������� ����� � ����� ������� ��������� �� ������� ������������ � �������� �� 2 - �� �� 9 - ��.";
	cout << "\n������� ���������� ����� :";
	cin>> nums;
	cout << "\n������� �������� ������� ��������� :";
	cin >> numbersystem;
	ofstream fout("decnums.txt");
	for (int i=0; i<nums;i++) {
		cout << "\n������� ����� � ������ �" << i+1 << endl;
		cin >> decnum;
		decnum += "\n";
		fout << decnum;
	}
	fout.close();
	ifstream fin("decnums.txt"); 

	if (!fin.is_open()) 
		cout << "���� �� ����� ���� ������!\n"; 
	while (fin) {
		fin >> readnum; 
		cout << readnum << endl; 
	}
		
	
	system("pause");
	task5();
}