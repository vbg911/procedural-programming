#include <iostream>
#include <fstream>

using namespace std;
void task6();
int getIntNumber();
void ismonk(int number);
int generalteacher(int teacher1, int teacher2);
int  teachers[600] = { 0 }, students[600][3] = { 0 };

void monks() {
	int i, task, monk, first, second, third;
	system("cls");
	cout << "Задание «Монахи»\n\n";
	cout << "  Задача 1) по номеру монаха узнать, был ли такой монах и если был, то кто были его учитель, учитель его учителя и т.д. до самого Святого Павла;\n";
	cout << "  Задача 2) по двум монашеским номерам найти их общего ближайшего учителя.\n\n";

	//                          Ручной ввод исходных данных
	//cout << "Введите исходные данные о монахах через пробел (номер монаха, номер 1-го ученика, номер 2-го ученика, номер 3-го ученика)\n\n";
	//do 
	//	{
	//		cin >> monk;
	//		if (monk == 0) break;
	//		cin >> first;
	//		cin >> second;
	//		cin >> third;
	//		students[monk][0] = first;
	//		students[monk][1] = second;
	//		students[monk][2] = third;
	//		teachers[first] = monk;
	//		teachers[second] = monk;
	//		teachers[third] = monk;
	//} while (monk > 0);
	//cout << input << endl;
	//monk = getIntNumber();
	//first = getIntNumber();
	//second = getIntNumber();
	//third = getIntNumber();

										// Ввод исходных данных из файла monk.txt
	ifstream in;										// поток для чтения
	in.open("monk.txt", ios::in);						// открытие файла для чтения
	for (i = 0; i < 6; i++)
	{
		in >> monk >> first >> second >> third;
		students[monk][0] = first;
		students[monk][1] = second;
		students[monk][2] = third;
		teachers[first] = monk;
		teachers[second] = monk;
		teachers[third] = monk;
	}
	in.close();

	cout << "Введите номер задачи ";
	task = getIntNumber();
	switch (task)
	{
	case 1:
		cout << "\nВведите номер монаха ";
		monk = getIntNumber();
		if (teachers[monk] == 0)
		{
			cout << monk << " не монах";
		}
		else
		{
			cout << monk << " монах, его учителя ";
			ismonk(monk);
		}
		cout << endl;
		break;
	case 2:
		cout << "\nВведите номера двух монахов через пробел ";
		cin >> first;
		cin >> second;
		if (teachers[first] == 0)
		{
			cout << first << " не монах" << endl << endl;
		}

		else
		{
			if (teachers[second] == 0)
			{
				cout << second << " не монах" << endl << endl;
			}
			else
			{
				cout << first << " и " << second << " оба монахи и их общий учитель ";
				first = teachers[first];
				second = teachers[second];
				cout << generalteacher(first, second) << endl << endl;
			}
		}
		break;
	default:
		cout << endl << task << " неверный номер задачи\n\n";
		break;
	}

	system("pause");
	task6();
}

void ismonk(int number)							// Рекурсивная функция для поиска учителей
{
	if (teachers[number] == 1)
	{
		return;
	}
	else
	{
		cout << teachers[number] << " ";
		ismonk(teachers[number]);
	}
}

int generalteacher(int teacher1, int teacher2)		// Рекурсивная функция для поиска общего учителя
{
	if (teacher1 == teacher2)
		return (teacher1);
	else
	{
		if (teacher1 > teacher2)
		{
			teacher1 = teachers[teacher1];
		}
		else
		{
			teacher2 = teachers[teacher2];
		}
		generalteacher(teacher1, teacher2);
	}
}

