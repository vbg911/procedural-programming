#include <iostream>

using namespace std;
void task1();
float getNumber();

void arithmetic() {
	float num1, num2;
	system("cls");
	cout << "Задача «Арифметика»\n\n";
	cout << "Арифметические действия над двумя числами\n\n";
	cout.precision(3);
	cout << "Введите первое число = ";
	num1 = getNumber();
	cout << "Введите второе число = ";
	num2 = getNumber();
	cout << "\n=========================\n";
	cout << "Сумма чисел = " << num1 + num2 << endl;
	cout << "Разность чисел = " << num1 - num2 << endl;
	cout << "Произведение чисел = " << num1 * num2 << endl;
	if (num2 == 0)
	{
		cout << " Второе число равно = 0. Выполнить деление невозможно.";
	}
	else
	{
		cout << "Частное от деления чисел = " << num1 / num2 << endl;
	}
	cout << "\n\n\n";
	system("pause");
	task1();
}