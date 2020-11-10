#include <iostream>

using namespace std;
void task1();
float getNumber();

void equation() {
	float  b, c, x;
	system("cls");
	cout << "Задача «Уравнение»\n\n";
	cout << "Решение уравнения вида bx + c = 0\n\n";
	cout << "Введите b = ";
	b = getNumber();
	cout << "Введите c = ";
	c = getNumber();
	cout << "\n===================\n\n";
	if (c == 0)
	{
		cout << "Уравнение " << b << "x = 0\n" << "x = 0\n\n\n";
	}
	else
	{
		if (c > 0)
		{
			cout << "Уравнение " << b << "x + " << c << " = 0" << endl;
		}
		else
		{
			cout << "Уравнение " << b << "x - " << abs(c) << " = 0" << endl;
		}
		x = -c / b;
		cout << "x =" << x << "\n\n\n";
	}
	system("pause");
	task1();
}