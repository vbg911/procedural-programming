#include <iostream>
#include <fstream>
#include <conio.h>

using namespace std;
void task6();
int getIntNumber();
int neighbors(int, int);
int outputondisplay();
int now[21][21], future[21][21];
int outprint;

void life()
{
	ofstream out;														// поток для записи
	ifstream in;														// поток для чтения
	string textout;
	char ch;
	int i, j, k, generation, count;

	system("cls");
	cout << "Задача «Жизнь»\n\n";
	cout << "Программа описывающая жизнь микроорганизмов.\n\n";
	cout << "Введите параметр для записи в файл work.dat\n 1 - ввод всех символов вручную\n 2 - использовать ранее записанные символы\n";
	int vvod;
	cin >> vvod;
	cout << "Введите параметр для вывода поколений микробов\n 1 - вывод всех поколений\n 2 - отключение вывода поколений\n";
	cin >> outprint;
	if (outprint == 1) {
		cout << "Вывод всех поколений включен.\n";
	} else {
		cout << "Вывод всех поколений выключен.\n";
	}
	int number_left = 441;
	if (vvod==1) {
		cout << "Ввод чисел вручную\n\n";
		out.open("work.dat", ios::out);					// окрытие файла для дозаписи 
		if (out)
		{
			for (i = 0; i < 21; i++)
			{
				for (j = 0; j < 21; j++)
				{
					cout << "Осталось ввести "<<number_left<<" символов"<< endl;
					number_left--;
					ch = _getch();
					out << ch;									// запись в файл содержимого 
				}
				out << "\n";									// запись в файл конца строки
			}
			cin.ignore();
		}
		else
		{
			cout << "Не могу открыть файл для записи\n";
		}
		out.close();
	}
	else
		cout << "используются ранее заданные числа.\n";
	

	cout << "Введите количество поколений: ";
	generation = getIntNumber();

	in.open("work.dat", ios::in);						// окрытие файла для чтения
	out.open("work.txt", ios::out);						// окрытие файла для дозаписи 
	cout << "\nПоколение 1" << endl;
	for (i = 0; i < 21; i++)										// чтение содержимого файла в now[][]
	{
		for (j = 0; j < 21; j++)
		{
			in >> ch;
			if (ch == 'h')									// есть микроб
			{
				now[i][j] = 1;
				future[i][j] = 1;						// сразу записываем	в массив future, чтобы вывести 1-е поколение на экран 
			}
			else
			{
				now[i][j] = 0;
				future[i][j] = 0;
			}
			out << now[i][j];							    // вывод 1-го поколения в файл
		}
	}
	in.close();
	
	out << "Поколение 1" << endl;
	int out1 = outputondisplay();
	if (out1 == 0) {
		system("pause");
		task6();
	}

	for (k = 1; k < generation; k++)
	{
		cout << "\nПоколение " << k + 1 << endl;										// вывод настоящего в файл work.out
		out << "Поколение " << k + 1 << endl;											// вывод настоящего в файл work.out
		for (i = 0; i < 21; i++)
		{
			for (j = 0; j < 21; j++)
			{
				if (now[i][j] > 0)												// здесь есть микроб
				{
					if (now[i][j] == 12)									// микроб умирает
					{
						future[i][j] = 0;
					}
					else
					{
						count = neighbors(i, j);						// количество соседей
						if (count == 2 || count == 3)
						{
							future[i][j] = ++now[i][j];
						}
						else
						{
							future[i][j] = 0;
						}
					}
				}
				else														// здесь нет микроба
				{
					count = neighbors(i, j);								// количество соседей
					if (count == 3)
					{
						future[i][j] = 1;								// если соседей 3, то рождается новый микроб
					}
					else
					{
						future[i][j] = 0;
					}
				}
				out << future[i][j];									// вывод настоящего в файл work.out
			}
			out << "\n";													// запись в файл конца строки
		}
		int out = outputondisplay();
		if (out == 0) {
			break;
		}

		for (i = 0; i < 21; i++)												// future => now
		{
			for (j = 0; j < 21; j++)
			{
				now[i][j] = future[i][j];
			}
		}


	}
	out.close();

	system("pause");
	task6();
}

int neighbors(int i, int j)						// Функция подсчета количества соседей
{
	int n = 0, event;
	if (i == 0)									// Определяем местоположение микроба
	{
		if (j == 0)								// Левый верхний угол
		{
			event = 1;
		}
		else
		{
			if (j == 20)						// Правый верхний угол
			{
				event = 2;
			}
			else								// Самый верхний ряд
			{
				event = 3;
			}
		}
	}
	else
	{
		if (i == 20)
		{
			if (j == 0)						// Левый нижний угол					
			{
				event = 4;
			}
			else
			{
				if (j == 20)				// Правый нижний угол
				{
					event = 5;
				}
				else						// Самый нижний ряд
				{
					event = 6;
				}
			}
		}
		else
		{
			if (j == 0)							// Самый левый ряд
			{
				event = 7;
			}
			else
			{
				if (j == 20)				// Самый правый ряд
				{
					event = 8;
				}
				else						// Внутренние ячейки
				{
					event = 9;
				}
			}
		}
	}

	switch (event)
	{
	case 1:										// Левый верхний угол
		if (now[0][1] > 0) { n++; }
		if (now[1][1] > 0) { n++; }
		if (now[1][0] > 0) { n++; }
		break;
	case 2:										// Правый верхний угол
		if (now[0][19] > 0) { n++; }
		if (now[1][19] > 0) { n++; }
		if (now[1][20] > 0) { n++; }
		break;
	case 3:										// Самый верхний ряд
		if (now[0][j - 1] > 0) { n++; }
		if (now[1][j - 1] > 0) { n++; }
		if (now[1][j] > 0) { n++; }
		if (now[1][j + 1] > 0) { n++; }
		if (now[0][j + 1] > 0) { n++; }
		break;
	case 4:										// Левый нижний угол
		if (now[19][0] > 0) { n++; }
		if (now[19][1] > 0) { n++; }
		if (now[20][1] > 0) { n++; }
		break;
	case 5:										// Правый нижний угол
		if (now[19][19] > 0) { n++; }
		if (now[19][20] > 0) { n++; }
		if (now[20][19] > 0) { n++; }
		break;
	case 6:										// Самый нижний ряд
		if (now[20][j - 1] > 0) { n++; }
		if (now[19][j - 1] > 0) { n++; }
		if (now[19][j] > 0) { n++; }
		if (now[19][j + 1] > 0) { n++; }
		if (now[20][j + 1] > 0) { n++; }
		break;
	case 7:										// Самый левый ряд
		if (now[i - 1][0] > 0) { n++; }
		if (now[i - 1][1] > 0) { n++; }
		if (now[i][1] > 0) { n++; }
		if (now[i + 1][1] > 0) { n++; }
		if (now[i + 1][0] > 0) { n++; }
		break;
	case 8:										// Самый правый ряд
		if (now[i - 1][20] > 0) { n++; }
		if (now[i - 1][19] > 0) { n++; }
		if (now[i][19] > 0) { n++; }
		if (now[i + 1][19] > 0) { n++; }
		if (now[i + 1][20] > 0) { n++; }
		break;
	case 9:										// Внутренние ячейки
		if (now[i - 1][j - 1] > 0) { n++; }
		if (now[i - 1][j] > 0) { n++; }
		if (now[i - 1][j + 1] > 0) { n++; }
		if (now[i][j - 1] > 0) { n++; }
		if (now[i][j + 1] > 0) { n++; }
		if (now[i + 1][j - 1] > 0) { n++; }
		if (now[i + 1][j] > 0) { n++; }
		if (now[i + 1][j + 1] > 0) { n++; }
		break;
	}
	return n;
}
int outputondisplay()										// вывод на экран очередного поколения
{
	int i, j, countm;
	countm = 0;
	if (outprint ==1) 
		cout << "-----------------------------------------------------------------" << endl;
	for (i = 0; i < 21; i++)
	{
		if (outprint == 1)
			cout << "|";
		for (j = 0; j < 21; j++)
		{
			if (future[i][j] == 0)
			{
				if (outprint == 1)
					cout << "   ";
			}
			else
			{
				countm++;
				if (future[i][j] > 9)
				{
					if (outprint == 1)
						cout << " " << future[i][j];
				}
				else
				{
					if (outprint == 1)
						cout << "  " << future[i][j];
				}
			}
		}
		if (outprint == 1)
			cout << "|" << endl;
	}
	if (outprint == 1)
		cout << "-----------------------------------------------------------------" << endl;
	if (countm == 0)
	{
		cout << "Все микробы умерли" << endl;

	}
	else
	{
		cout << "Всего в этом поколении живых микробов - " << countm << endl;
	}
	return countm;
}

