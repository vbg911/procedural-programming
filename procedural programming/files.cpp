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
	bool enter=true;
	cout << "������� ���� �� N ������������ ����� � ���������� ������� ���������.\n� ������ ���� �������� ��� �����, ������������ �� ��������� ����� � ����� ������� ��������� �� ������� ������������ � �������� �� 2 - �� �� 9 - ��.";
	cout << "\n������� ���������� ����� :";
	cin>> nums;
	while (enter) {
	cout << "\n������� �������� ������� ��������� :";
	cin >> numbersystem;
		if (numbersystem>=2&&numbersystem<=9) {
			enter = false;
		} else {
			cout << "��������� ����" << endl;
		}
	}
	
	ofstream fout("decnums.txt");
	for (int i=0; i<nums;i++) {
		cout << "\n������� ����� � ������ �" << i+1 << endl;
		cin >> decnum;
		decnum += "\n";
		fout << decnum;
	}
	fout.close();
	ifstream fin("decnums.txt"); 
	ofstream fout2("edited_nums.txt");
	if (!fin.is_open()) 
		cout << "���� �� ����� ���� ������!\n"; 
	for (int i = 0; i < nums;i++) {
		fin >> readnum;
		
		string s1, s2, donenum;
		char znak;
		auto pos = readnum.find(".");
		if (pos != string::npos)   // ���������� ������ �� ����� � ������� �����.
		{
			s1 = readnum.substr(0, pos);
			s2 = readnum.substr(pos + 1);
			if (s1[0] == '-') {
				znak = '-';
				s1.erase(s1.find('-'), 1);
			}
			//cout << "����� ����� �����: " << s1 << endl << "������� ����� �����: " << s2 << endl;
			donenum = from_dec(to_dec(s1, 10), numbersystem)+"."+from_dec_farc(to_dec_frac(s2, 10), numbersystem);
			cout << "����� �" << i + 1 << " � " << numbersystem << " ������� ��������� ����� " <<donenum <<endl;
			fout2 << donenum+"\n";
		}
	}
	fin.close();
	fout2.close();
system("pause");
	task5();
}

