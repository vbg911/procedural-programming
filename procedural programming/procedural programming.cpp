#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

void homework();
void task1();
void task2();
void task3();
void task4();
void name();
void arithmetic();
void equation();
void anotherEquation();
void lampWithCurtain();
void cone();
void branching();
void function();
void order();
void tabulation();
void loan();
void Lending();
void dummy();
int getIntNumber();
void CopyingFile();
void filter();
void Sortingofletters();
void file();
void NumberSign();
void GeometricalFigure();
void pick_sinusoid();
void former_glory();
void random_generator();
int number;

int main()
{
	setlocale(LC_ALL, "Russian");
	homework();
}

// Заглушка
void dummy(int homeworkNum) {
	cout << "Пока не сделано. Для возврата нажмите любую клавишу.\n";
	_getch();
	switch (homeworkNum)
	{
	case 1:
		task1();
		break;
	case 2:
		task2();
		break;
	case 3:
		task3();
		break;
	case 4:
		task4();
		break;
	default:
		homework();
		break;
	}
}
void homework() {
	string tasks[5] = { "1) Домашнее задание № 1", "2) Домашнее задание № 2", "3) Домашнее задание № 3","4) Домашнее задание № 4","\n0) Выход" };
	system("cls");
	cout << "Процедурное программирование\n\n";
	cout << "Выберите номер домашнего задания.\n";
	for (int i = 0; i < 5; i++)
	{
		cout << tasks[i] << ::endl;
	}
	number = getIntNumber();
	switch (number)
	{
	case 0:
		exit(0);
	case 1:
		task1();
		break;
	case 2:
		task2();
		break;
	case 3:
		task3();
		break;
	case 4:
		task4();
		break;
	default:
		cout << "Выберите число от 0 до 4! Для возврата к выбору нажмите любую клавишу.\n";
		_getch();
		homework();
		break;
	}
}

// Домашнее задание №1
void task1() {
	string tasks1[6] = { "1) Задача «Имя»", "2) Задача «Арифметика»", "3) Задача «Уравнение»","4) Задача «Еще уравнение»", "5) Задача «Лампа со шторой»","\n0) Выбор домашнего задания" };
	system("cls");
	cout << "Домашнее задание № 1\n\n";
	cout << "Выберите номер задачи.\n";
	for (int i = 0; i < 6; i++)
	{
		cout << tasks1[i] << ::endl;
	}
	number=getIntNumber();
	switch (number)
	{
	case 0:
		homework();
		break;
	case 1:
		name();
		break;
	case 2:
		arithmetic();
		break;
	case 3:
		equation();
		break;
	case 4:
		anotherEquation();
		break;
	case 5:
		lampWithCurtain();
		break;
	default:
		cout << "Выберите число от 0 до 5! Для возврата к выбору нажмите любую клавишу.\n";
		_getch();
		task1();
		break;
	}

}
// Домашнее задание №2
void task2() {
	string tasks2[6] = { "1) Задача «Конус»", "2) Задача «Разветвление»", "3) Задача «Функция»","4) Задача «Порядок»" ,"5) Задача «Табуляция»","\n0) Выбор домашнего задачи" };
	system("cls");
	cout << "Домашнее задание № 2\n\n";
	cout << "Выберите номер задачи.\n";
	for (int i = 0; i < 6; i++)
	{
		cout << tasks2[i] << ::endl;
	}
	number=getIntNumber();
	switch (number)
	{
	case 0:
		homework();
		break;
	case 1:
		cone();
		break;
	case 2:
		branching();
		break;
	case 3:
		function();
		break;
	case 4:
		order();
		break;
	case 5:
		tabulation();
		break;
	default:
		cout << "Выберите число от 0 до 5! Для возврата к выбору нажмите любую клавишу.\n";
		_getch();
		task2();
		break;
	}
}

// Домашнее задание №3
void task3() {
	string tasks3[6] = { "1) Задача «Заем»" ,"2) Задача «Ссуда»" ,"3) Задача «Копирование файла»" ,"4) Задача «Фильтр»" ,"5) Задача «Сортировка букв»","\n0) Выбор домашнего задания" };
	system("cls");
	cout << "Домашнее задание № 3\n\n";
	cout << "Выберите номер задачи.\n";
	for (int i = 0; i < 6; i++)
	{
		cout << tasks3[i] << ::endl;
	}
	number=getIntNumber();
	switch (number)
	{
	case 0:
		homework();
		break;
	case 1:
		loan();
		break;
	case 2:
		Lending();
		break;
	case 3:
		CopyingFile();
		break;
	case 4:
		filter();
		break;
	case 5:
		Sortingofletters();
		break;
	default:
		cout << "Выберите число от 0 до 5! Для возврата к выбору нажмите любую клавишу.\n";
		_getch();
		task3();
		break;
	}
}

// Домашнее задание №4
void task4() {
	string tasks4[10] = { "1) Задача «Файл»","2) Задача «Знак числа»","3) Задача «Геометрические фигуры»" ,"4) Задача «Былая слава»" ,"5) Задача «Синусоида»","6) Задача «Автоматный распознаватель»","7) Задача «Генератор случайных чисел»" ,"8) Задача «Умножение матриц»","9) Задача «Системы счисления»","\n0) Выбор домашнего задания" };
	system("cls");
	cout << "Домашнее задание № 4\n\n";
	cout << "Выберите номер задачи.\n";
	for (int i = 0; i < 10; i++)
	{
		cout << tasks4[i] << ::endl;
	}
	number=getIntNumber();
	switch (number)
	{
	case 0:
		homework();
		break;
	case 1:
		file();
		break;
	case 2:
		NumberSign();
		break;
	case 3:
		GeometricalFigure();
		break;
	case 4:
		former_glory();
		break;
	case 5:
		pick_sinusoid();
		break;
	case 6:
		dummy(4);
		break;
	case 7:
		random_generator();
		break;
	case 8:
		dummy(4);
		break;
	default:
		cout << "Выберите число от 0 до 9! Для возврата к выбору нажмите любую клавишу.\n";
		_getch();
		task4();
		break;
	}
}



// Ввод float числа c проверкой
float getNumber() {
	float num;
	cin >> num;
	if (cin.fail())													// если предыдущее извлечение было неудачным,
	{
		cout << "Введено не правильное число. Повторите ввод.";
		cin.clear();											// то возвращаем cin в 'обычный' режим работы
		cin.ignore(32767, '\n');					// и удаляем значения предыдущего ввода из входного буфера
		return(getNumber());
	}
	cin.ignore(32767, '\n');
	return(num);
}


// Ввод int числа c проверкой
int getIntNumber() {
	int num;
	cin >> num;
	if (cin.fail())													
	{
		cout << "Введено не правильное число. Повторите ввод.";
		cin.clear();											
		cin.ignore(32767, '\n');					
		return(getIntNumber());
	}
	cin.ignore(32767, '\n');
	return(num);
}

