﻿// procedural programming.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
using namespace std;

void name();
void arithmetic();

int main()
{
	setlocale(LC_ALL, "Russian");
	string tasks[22] = { "1) «Имя» +", "2) «Арифметика»", "3) «Уравнение»","4) «Еще уравнение»", "5) «Лампа со шторой»", "6)  «Конус»", "7) «Функция»"
		,"8) «Порядок»" ,"9) «Табуляция»" ,"10) «Заем»" ,"11) «Ссуда»" ,"12) «Копирование файла»" ,"13) «Фильтр»" ,"14) «Сортировка букв»" ,"15) «Файл»"
		,"16) «Знак числа»","17) «Геометрические фигуры»" ,"18) «Былая слава»" ,"19) «Синусоида»" ,"20) «Генератор случайных чисел»" ,"21) «Умножение матриц»"
		,"22) «Системы счисления»" };
	int number;
	cout << "Выберите номер задачи. Знаком '+' отмечены выполненные задания.\n";
	for (int i = 0; i <22; i++)
	{
		cout << tasks[i] << ::endl;
	}
	cin >> number;
	switch (number)
	{
	case 1: 
		cout << "Выбрана задача «Имя».\n";
		name();
		break;
	case 2: 
		cout << "Выбрана задача «Арифметика».\n";
		arithmetic();
		break;
	case 3: 
		cout << "Выбрана задача «Уравнение»».\n";
		break;
	case 4: 
		cout << "Выбрана задача «Еще уравнение».\n";
		break;
	case 5: 
		cout << "Выбрана задача «Лампа со шторой».\n";
		break;
	case 6: 
		cout << "Выбрана задача «Конус».\n";
		break;
	case 7: 
		cout << "Выбрана задача «Функция».\n";
		break;
	case 8: 
		cout << "Выбрана задача «Порядок».\n";
		break;
	case 9: 
		cout << "Выбрана задача «Табуляция».\n";
		break;
	case 10: 
		cout << "Выбрана задача «Заем».\n";
		break;
	case 11: 
		cout << "Выбрана задача «Ссуда».\n";
		break;
	case 12: 
		cout << "Выбрана задача «Копирование файла».\n";
		break;
	case 13: 
		cout << "Выбрана задача «Фильтр».\n";
		break;
	case 14: 
		cout << "Выбрана задача «Сортировка букв».\n";
		break;
	case 15: 
		cout << "Выбрана задача «Файл».\n";
		break;
	case 16: 
		cout << "Выбрана задача «Знак числа».\n";
		break;
	case 17: 
		cout << "Выбрана задача «Геометрические фигуры».\n";
		break;
	case 18: 
		cout << "Выбрана задача «Былая слава».\n";
		break;
	case 19: 
		cout << "Выбрана задача «Синусоида».\n";
		break;
	case 20: 
		cout << "Выбрана задача «Генератор случайных чисел».\n";
		break;
	case 21: 
		cout << "Выбрана задача «Умножение матриц».\n";
		break;
	case 22: 
		cout << "Выбрана задача «Системы счисления».\n";
		break;
	default:
		cout << "Выберите число от 1 до 22!\n";
		break;
	}
}

void name() {
	cout << "Валерий\n";
	return;
}

void arithmetic() {
	float num1,num2;
	cout.precision(3);
	cout << "Введите два числа через пробел.\n";
	cin >> num1 >> num2;
	cout << "Введенное число a=" << fixed<< num1 << " Введенное число b=" << fixed << num2 << endl;
	cout << "Сумма чисел= " << num1 + num2 << endl;
	cout << "Разность чисел= " << num1 - num2 << endl;
	cout << "Произведение чисел= " << num1 * num2 << endl;
	if (num2 == 0) {
		cout << "Выполнить деление невозможно. Второе число равно ="<<num2 << endl;
	}
	else
	{
		cout << "Частное чисел= " << num1 / num2 << endl;
	}

	return;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
