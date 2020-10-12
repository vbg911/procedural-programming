#include <iostream>
#include <fstream>

using namespace std;
bool WriteFile(string filename);
bool PrintFile(string filename);
void task5();

void Processing_text_files() {
	string filename;
	cout << "Задача «Системы счисления».\n";
	cout << "Введите название файла." << endl;
	cin >> filename;
	filename = filename + ".txt";
	WriteFile(filename);
	cout << "Вывод текста из файла'" << filename << "' начался." << endl;
	PrintFile(filename);
	system("pause");
	task5();
}

bool WriteFile(string filename) {
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
	cout << "Вывод текста из файла '" << filename << "' завершен." << endl;
	return true;
}