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
	cout << "Создать файл, записать в него 10 чисел через пробел, закрыть, потом вновь открыть файл и найти сумму чисел.\n---------------------------------------------\n\n" << endl;
	cout << "Введите название файла." << endl;
	cin >> filename;
	filename = filename + ".txt";
	writefile(filename);
	cout << "Вывод текста из файла'" << filename << "' начался." << endl;
	printfile(filename);
	system("pause");
	task3();
}


bool writefile(string filename) {
	ofstream os(filename);
	if (!os)
	{
		cout << "Не удалось открыть файл.\n";
		return false;
	}
	char str[80];
	cout << "Введите текст. Что бы закончить ввод введите '!' в новой строке." << endl;
	cin.ignore(80, '\n');
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
	cout << "Вывод текста из файла '" << filename << "' завершен." << endl;
	return true;
}