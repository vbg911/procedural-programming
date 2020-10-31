//15 задача
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
	cout << "Создать файл из N вещественных чисел в десятичной системе счисления.\nВ другой файл записать эти числа, переведенные из исходного файла в любую систему счисления по желанию пользователя в пределах от 2 - ой до 9 - ой.";
	cout << "\nВведите количество чисел :";
	cin>> nums;
	cout << "\nВведите конечную систему счисления :";
	cin >> numbersystem;
	ofstream fout("decnums.txt");
	for (int i=0; i<nums;i++) {
		cout << "\nВведите число с точкой №" << i+1 << endl;
		cin >> decnum;
		decnum += "\n";
		fout << decnum;
	}
	fout.close();
	ifstream fin("decnums.txt"); 
	ofstream fout2("edited_nums.txt");
	if (!fin.is_open()) 
		cout << "Файл не может быть открыт!\n"; 
	for (int i = 0; i < nums;i++) {
		fin >> readnum;
		
		string s1, s2, donenum;
		char znak;
		auto pos = readnum.find(".");
		if (pos != string::npos)   // разделение строки на целую и дробную части.
		{
			s1 = readnum.substr(0, pos);
			s2 = readnum.substr(pos + 1);
			if (s1[0] == '-') {
				znak = '-';
				s1.erase(s1.find('-'), 1);
			}
			//cout << "Целая часть числа: " << s1 << endl << "Дробная часть числа: " << s2 << endl;
			donenum = from_dec(to_dec(s1, 10), numbersystem)+"."+from_dec_farc(to_dec_frac(s2, 10), numbersystem);
			cout << "Число №" << i + 1 << " в " << numbersystem << " системе счисления равно " <<donenum <<endl;
			fout2 << donenum+"\n";
		}
	}
	fin.close();
	fout2.close();
system("pause");
	task5();
}

