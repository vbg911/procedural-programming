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
	double num;
	for (int i = 0; i < 10; i++)
	{
		cout << "Введите " << i + 1<<" число.\n";
		cin >> num;
		os << num << endl;
	}
	os.close();
	cout << "Запись в файл '" << filename << "' завершена.\n" << endl;
	return true;
}


bool printfile(string filename) {
	ifstream is(filename);
	if (!is)
		return false;
	double n, sum = 0.0;
	while (is)
	{
		is >> n;
		sum += n;
	}
	is.close();
	cout << "Сумма чисел из файла '" << filename << "' равна " <<sum<< endl;
	return true;
}