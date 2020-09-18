#include <iostream>

using namespace std;
void task2();



void branching() {
	double a, x, w;
	cout.precision(3);
	system("cls");
	cout << "Задача «Разветвление»\n\n";
	cout << "Введите через пробел произвольные значение для 'a' и 'x'.\n";
	cin >> a >> x;
	cout << "Значение 'a'=" << fixed << a << "\n" << "Значение 'x'=" << fixed << x << endl;
	if (abs(x) < 1) {
		if (x == 0) {
			cout << "|x|<1 Значение 'w' равно бесконечности." << endl;
		}
		else {
			w = a * log(abs(x));
			cout << "|x|<1 Значение 'w'=" << fixed << w << endl;
		}
	}
	else if (abs(x) >= 1 && a > x * x) {
		w = sqrt(a - x * x);
		cout << "|x|>=1 Значение 'w'=" << fixed << w << endl;
	}
	else {
		cout << "|x|>=1 Значение 'w' не может быть определено." << endl;
	}
	system("pause");
	task2();
}
