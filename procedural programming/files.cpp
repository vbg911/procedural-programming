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

	if (!fin.is_open()) 
		cout << "Файл не может быть открыт!\n"; 
	while (fin) {
		fin >> readnum; 
		cout << readnum << endl; 
	}
		
	
	system("pause");
	task5();
}