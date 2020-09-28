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
	cout << "Вывести на экран только числа из созданного Вами на диске текстового файла, содержащего буквы и числа.\n---------------------------------------------\n\n" << endl;
	cout << "Введите название файла." << endl;
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
		cout << "Не удалось открыть файл.\n";
		return false;
	}
	char str[80];
	cout << "Введите текст. Что бы закончить ввод введите '!' в новой строке." << endl;
	do
	{
		cin.getline(str, 80);
		if (*str != '!') {
			os << str << endl;
		}
	} while (*str != '!');
	os.close();
	cout << "Запись в файл '" << filename << "' завершена.\n" << endl;
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
	cout << "Вывод текста из файла '" << filename << "' завершен." << endl;
	return true;
}

