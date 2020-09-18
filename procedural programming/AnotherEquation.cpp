#include <iostream>

using namespace std;

void task1();
float getNumber();

// Анализ коэффициента: 1 = 0, 2 = 1, 3 > 0, 4 = -1, 5 < 0
int part(float num)
{
	if (num == 0)
	{
		return(1);
	}
	else
	{
		if (num > 0)
		{
			if (num == 1)
			{
				return(2);
			}
			else
			{
				return(3);
			}
		}
		else
		{
			if (num == -1)
			{
				return(4);
			}
			else
			{
				return(5);
			}
		}
	}
}

void anotherEquation() {
	float disc, a, b, c, x1, x2;
	int part1, part2, part3;
	system("cls");
	cout << "Задача «Еще уравнение»\n\n";
	cout << "Решение уравнения вида ax^2 + bx + c = 0\n\n";
	//	cout.precision(3);
	cout << "Введите a = ";
	a = getNumber();
	cout << "Введите b = ";
	b = getNumber();
	cout << "Введите c = ";
	c = getNumber();

	cout << "\n===========================\n";
	part1 = part(a);
	part2 = part(b);
	part3 = part(c);
	switch (part1)
	{
	case 1:
		switch (part2)
		{
		case 1:
			cout << "Нет никакого уравнения. Решать нечего.\n";
			break;
		case 2:
			switch (part3)
			{
			case 1:
				cout << "Уравнение x = 0\n";
				break;
			case 2:
				cout << "Уравнение x + 1 = 0\n";
				break;
			case 3:
				cout << "Уравнение x + " << c << " = 0\n";
				break;
			case 4:
				cout << "Уравнение x - 1 = 0\n";
				break;
			case 5:
				cout << "Уравнение x - " << abs(c) << " = 0\n";
				break;
			}
			break;
		case 3:
			switch (part3)
			{
			case 1:
				cout << "Уравнение " << b << "x = 0\n";
				break;
			case 2:
				cout << "Уравнение " << b << "x + 1 = 0\n";
				break;
			case 3:
				cout << "Уравнение " << b << "x + " << c << " = 0\n";
				break;
			case 4:
				cout << "Уравнение " << b << "x - 1 = 0\n";
				break;
			case 5:
				cout << "Уравнение " << b << "x - " << abs(c) << " = 0\n";
				break;
			}
			break;
		case 4:
			switch (part3)
			{
			case 1:
				cout << "Уравнение -x = 0\n";
				break;
			case 2:
				cout << "Уравнение -x + 1 = 0\n";
				break;
			case 3:
				cout << "Уравнение -x + " << c << " = 0\n";
				break;
			case 4:
				cout << "Уравнение -x - 1 = 0\n";
				break;
			case 5:
				cout << "Уравнение -x - " << abs(c) << " = 0\n";
				break;
			}
			break;
		case 5:
			switch (part3)
			{
			case 1:
				cout << "Уравнение " << b << "x = 0\n";
				break;
			case 2:
				cout << "Уравнение " << b << "x + 1 = 0\n";
				break;
			case 3:
				cout << "Уравнение " << b << "x + " << c << " = 0\n";
				break;
			case 4:
				cout << "Уравнение " << b << "x - 1 = 0\n";
				break;
			case 5:
				cout << "Уравнение " << b << "x - " << abs(c) << " = 0\n";
				break;
			}
		}
		break;
	case 2:
		switch (part2)
		{
		case 1:
			switch (part3)
			{
			case 1:
				cout << "Уравнение x^2 = 0\n\n";
				break;
			case 2:
				cout << "Уравнение x^2 + 1 = 0\n\n";
				break;
			case 3:
				cout << "Уравнение x^2 + " << c << " = 0\n\n";
				break;
			case 4:
				cout << "Уравнение x^2 - 1 = 0\n\n";
				break;
			case 5:
				cout << "Уравнение x^2 - " << abs(c) << " = 0\n\n";
				break;
			}
			break;
		case 2:
			switch (part3)
			{
			case 1:
				cout << "Уравнение x^2 + x = 0\n\n";
				break;
			case 2:
				cout << "Уравнение x^2 + x + 1 = 0\n\n";
				break;
			case 3:
				cout << "Уравнение x^2 + x + " << c << " = 0\n\n";
				break;
			case 4:
				cout << "Уравнение x^2 + x - 1 = 0\n\n";
				break;
			case 5:
				cout << "Уравнение x^2 + x - " << abs(c) << " = 0\n\n";
				break;
			}
			break;
		case 3:
			switch (part3)
			{
			case 1:
				cout << "Уравнение x^2 + " << b << "x = 0\n\n";
				break;
			case 2:
				cout << "Уравнение x^2 + " << b << "x + 1 = 0\n\n";
				break;
			case 3:
				cout << "Уравнение x^2 + " << b << "x + " << c << " = 0\n\n";
				break;
			case 4:
				cout << "Уравнение x^2 + " << b << "x - 1 = 0\n\n";
				break;
			case 5:
				cout << "Уравнение x^2 + " << b << "x - " << abs(c) << " = 0\n\n";
				break;
			}
			break;
		case 4:
			switch (part3)
			{
			case 1:
				cout << "Уравнение x^2 - x = 0\n\n";
				break;
			case 2:
				cout << "Уравнение x^2 - x + 1 = 0\n\n";
				break;
			case 3:
				cout << "Уравнение x^2 - x + " << c << " = 0\n\n";
				break;
			case 4:
				cout << "Уравнение x^2 - x - 1 = 0\n\n";
				break;
			case 5:
				cout << "Уравнение x^2 - x - " << abs(c) << " = 0\n\n";
				break;
			}
			break;
		case 5:
			switch (part3)
			{
			case 1:
				cout << "Уравнение x^2 - " << abs(b) << "x = 0\n\n";
				break;
			case 2:
				cout << "Уравнение x^2 - " << abs(b) << "x + 1 = 0\n\n";
				break;
			case 3:
				cout << "Уравнение x^2 - " << abs(b) << "x + " << c << " = 0\n\n";
				break;
			case 4:
				cout << "Уравнение x^2 - " << abs(b) << "x - 1 = 0\n\n";
				break;
			case 5:
				cout << "Уравнение x^2 - " << abs(b) << "x - " << abs(c) << " = 0\n\n";
				break;
			}
			break;
		}
		break;
	case 3:
		switch (part2)
		{
		case 1:
			switch (part3)
			{
			case 1:
				cout << "Уравнение " << a << "x^2 = 0\n\n";
				break;
			case 2:
				cout << "Уравнение " << a << "x^2 + 1 = 0\n\n";
				break;
			case 3:
				cout << "Уравнение " << a << "x^2 + " << c << " = 0\n\n";
				break;
			case 4:
				cout << "Уравнение " << a << "x^2 - 1 = 0\n\n";
				break;
			case 5:
				cout << "Уравнение " << a << "x^2 - " << abs(c) << " = 0\n\n";
				break;
			}
			break;
		case 2:
			switch (part3)
			{
			case 1:
				cout << "Уравнение " << a << "x^2 + x = 0\n\n";
				break;
			case 2:
				cout << "Уравнение " << a << "x^2 + x + 1 = 0\n\n";
				break;
			case 3:
				cout << "Уравнение " << a << "x^2 + x + " << c << " = 0\n\n";
				break;
			case 4:
				cout << "Уравнение " << a << "x^2 + x - 1 = 0\n\n";
				break;
			case 5:
				cout << "Уравнение " << a << "x^2 + x - " << abs(c) << " = 0\n\n";
				break;
			}
			break;
		case 3:
			switch (part3)
			{
			case 1:
				cout << "Уравнение " << a << "x^2 + " << b << "x = 0\n\n";
				break;
			case 2:
				cout << "Уравнение " << a << "x^2 + " << b << "x + 1 = 0\n\n";
				break;
			case 3:
				cout << "Уравнение " << a << "x^2 + " << b << "x + " << c << " = 0\n\n";
				break;
			case 4:
				cout << "Уравнение " << a << "x^2 + " << b << "x - 1 = 0\n\n";
				break;
			case 5:
				cout << "Уравнение " << a << "x^2 + " << b << "x - " << abs(c) << " = 0\n\n";
				break;
			}
			break;
		case 4:
			switch (part3)
			{
			case 1:
				cout << "Уравнение " << a << "x^2 - x = 0\n\n";
				break;
			case 2:
				cout << "Уравнение " << a << "x^2 - x + 1 = 0\n\n";
				break;
			case 3:
				cout << "Уравнение " << a << "x^2 - x + " << c << " = 0\n\n";
				break;
			case 4:
				cout << "Уравнение " << a << "x^2 - x - 1 = 0\n\n";
				break;
			case 5:
				cout << "Уравнение " << a << "x^2 - x - " << abs(c) << " = 0\n\n";
				break;
			}
			break;
		case 5:
			switch (part3)
			{
			case 1:
				cout << "Уравнение " << a << "x^2 - " << abs(b) << "x = 0\n\n";
				break;
			case 2:
				cout << "Уравнение " << a << "x^2 - " << abs(b) << "x + 1 = 0\n\n";
				break;
			case 3:
				cout << "Уравнение " << a << "x^2 - " << abs(b) << "x + " << c << " = 0\n\n";
				break;
			case 4:
				cout << "Уравнение " << a << "x^2 - " << abs(b) << "x - 1 = 0\n\n";
				break;
			case 5:
				cout << "Уравнение " << a << "x^2 - " << abs(b) << "x - " << abs(c) << " = 0\n\n";
				break;
			}
		}
		break;
	case 4:
		switch (part2)
		{
		case 1:
			switch (part3)
			{
			case 1:
				cout << "Уравнение -x^2 = 0\n\n";
				break;
			case 2:
				cout << "Уравнение -x^2 +1 = 0\n\n";
				break;
			case 3:
				cout << "Уравнение -x^2 + " << c << " = 0\n\n";
				break;
			case 4:
				cout << "Уравнение -x^2 - 1 = 0\n\n";
				break;
			case 5:
				cout << "Уравнение -x^2 - " << abs(c) << " = 0\n\n";
				break;
			}
			break;
		case 2:
			switch (part3)
			{
			case 1:
				cout << "Уравнение -x^2 + x = 0\n\n";
				break;
			case 2:
				cout << "Уравнение -x^2 + x +1 = 0\n\n";
				break;
			case 3:
				cout << "Уравнение -x^2 + x + " << c << " = 0\n\n";
				break;
			case 4:
				cout << "Уравнение -x^2 + x - 1 = 0\n\n";
				break;
			case 5:
				cout << "Уравнение -x^2 + x - " << abs(c) << " = 0\n\n";
				break;
			}
			break;
		case 3:
			switch (part3)
			{
			case 1:
				cout << "Уравнение -x^2 + " << b << "x = 0\n\n";
				break;
			case 2:
				cout << "Уравнение -x^2 + " << b << "x +1 = 0\n\n";
				break;
			case 3:
				cout << "Уравнение -x^2 + " << b << "x + " << c << " = 0\n\n";
				break;
			case 4:
				cout << "Уравнение -x^2 + " << b << "x - 1 = 0\n\n";
				break;
			case 5:
				cout << "Уравнение -x^2 + " << b << "x - " << abs(c) << " = 0\n\n";
				break;
			}
			break;
		case 4:
			switch (part3)
			{
			case 1:
				cout << "Уравнение -x^2 - x = 0\n\n";
				break;
			case 2:
				cout << "Уравнение -x^2 - x +1 = 0\n\n";
				break;
			case 3:
				cout << "Уравнение -x^2 - x + " << c << " = 0\n\n";
				break;
			case 4:
				cout << "Уравнение -x^2 - x - 1 = 0\n\n";
				break;
			case 5:
				cout << "Уравнение -x^2 - x - " << abs(c) << " = 0\n\n";
				break;
			}
			break;
		case 5:
			switch (part3)
			{
			case 1:
				cout << "Уравнение -x^2 - " << abs(b) << "x = 0\n\n";
				break;
			case 2:
				cout << "Уравнение -x^2 - " << abs(b) << "x +1 = 0\n\n";
				break;
			case 3:
				cout << "Уравнение -x^2 - " << abs(b) << "x + " << c << " = 0\n\n";
				break;
			case 4:
				cout << "Уравнение -x^2 - " << abs(b) << "x - 1 = 0\n\n";
				break;
			case 5:
				cout << "Уравнение -x^2 - " << abs(b) << "x - " << abs(c) << " = 0\n\n";
				break;
			}
		}
		break;
	case 5:
		switch (part2)
		{
		case 1:
			switch (part3)
			{
			case 1:
				cout << "Уравнение " << a << "x^2 = 0\n\n";
				break;
			case 2:
				cout << "Уравнение " << a << "x^2 + 1 = 0\n\n";
				break;
			case 3:
				cout << "Уравнение " << a << "x^2 + " << c << " = 0\n\n";
				break;
			case 4:
				cout << "Уравнение " << a << "x^2 - 1 = 0\n\n";
				break;
			case 5:
				cout << "Уравнение " << a << "x^2 - " << abs(c) << " = 0\n\n";
				break;
			}
			break;
		case 2:
			switch (part3)
			{
			case 1:
				cout << "Уравнение " << a << "x^2 + x = 0\n\n";
				break;
			case 2:
				cout << "Уравнение " << a << "x^2 + x + 1 = 0\n\n";
				break;
			case 3:
				cout << "Уравнение " << a << "x^2 + x + " << c << " = 0\n\n";
				break;
			case 4:
				cout << "Уравнение " << a << "x^2 + x - 1 = 0\n\n";
				break;
			case 5:
				cout << "Уравнение " << a << "x^2 + x - " << abs(c) << " = 0\n\n";
				break;
			}
			break;
		case 3:
			switch (part3)
			{
			case 1:
				cout << "Уравнение " << a << "x^2 + " << b << "x = 0\n\n";
				break;
			case 2:
				cout << "Уравнение " << a << "x^2 + " << b << "x + 1 = 0\n\n";
				break;
			case 3:
				cout << "Уравнение " << a << "x^2 + " << b << "x + " << c << " = 0\n\n";
				break;
			case 4:
				cout << "Уравнение " << a << "x^2 + " << b << "x - 1 = 0\n\n";
				break;
			case 5:
				cout << "Уравнение " << a << "x^2 + " << b << "x - " << abs(c) << " = 0\n\n";
				break;
			}
			break;
		case 4:
			switch (part3)
			{
			case 1:
				cout << "Уравнение " << a << "x^2 - x = 0\n\n";
				break;
			case 2:
				cout << "Уравнение " << a << "x^2 - x + 1 = 0\n\n";
				break;
			case 3:
				cout << "Уравнение " << a << "x^2 - x + " << c << " = 0\n\n";
				break;
			case 4:
				cout << "Уравнение " << a << "x^2 - x - 1 = 0\n\n";
				break;
			case 5:
				cout << "Уравнение " << a << "x^2 - x - " << abs(c) << " = 0\n\n";
				break;
			}
			break;
		case 5:
			switch (part3)
			{
			case 1:
				cout << "Уравнение " << a << "x^2 - " << abs(b) << "x = 0\n\n";
				break;
			case 2:
				cout << "Уравнение " << a << "x^2 - " << abs(b) << "x + 1 = 0\n\n";
				break;
			case 3:
				cout << "Уравнение " << a << "x^2 - " << abs(b) << "x + " << c << " = 0\n\n";
				break;
			case 4:
				cout << "Уравнение " << a << "x^2 - " << abs(b) << "x - 1 = 0\n\n";
				break;
			case 5:
				cout << "Уравнение " << a << "x^2 - " << abs(b) << "x - " << abs(c) << " = 0\n\n";
				break;
			}
			break;
		}
		break;
	}


	disc = b * b - 4 * a * c;
	if (disc > 0) {
		x1 = (-1 * b + sqrt(disc)) / 2 * a;
		x2 = (-1 * b - sqrt(disc)) / 2 * a;
		cout << "x1 = " << x1 << "; x2 = " << x2 << endl;
	}
	else if (disc == 0) {
		x1 = -b / 2 * a;
		cout << "x1,2 = " << x1 << endl;
	}
	else
	{
		cout << "Это уравнение не имеет корней\n\n\n";
	}
	cout << "\n\n\n";
	system("pause");
	task1();
}
