#include <iostream>
#include <fstream>

using namespace std;
void task3();


void CopyingFile() {
	system("cls");
	cout << "Создать на диске текстовый файл и скопировать его на экран.\n------------------------------" << endl;
	cout << "Создание файла с названием 'CopyingFile'" << endl;
	ofstream fout("CopyingFile.txt");
	cout << "Файл успешно создан." << endl;
	ifstream fin("Copy");
	fout.close();
	system("pause");
	task3();
}