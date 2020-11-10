#include <iostream>

using namespace std;
void task2();

void function() {
	double x, y, b, z;
	cout.precision(3);
	system("cls");
	cout << "Задача «Функция»\n\n";
	cout << "Введите через пробел значения для 'x', 'y', 'b'" << endl;
	cin >> x >> y >> b;
	cout << "Значение x= " << fixed << x << "\n" << "значение y= " << fixed << y << "\n" << "значение b= " << fixed << b << endl;
	if (b - y > 0 && b - x >= 0) {
		z = log(b - y) * sqrt(b - x);
		cout << "Значение 'z'=" << z << endl;
	}
	else {
		cout << "Значение 'z' не может быть вычисленно." << endl;
	}
	system("pause");
	task2();
}
