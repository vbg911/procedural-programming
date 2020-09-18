#include <iostream>

using namespace std;
void task3();



void loan() {
	double S, p, n, m, r;
	cout.precision(2);
	system("cls");
	cout << "Задача «Заём»\n\n";
	cout << "Введите через пробел ссуму займа 'S', процент 'p', количество лет 'n'." << endl;
	cin >> S >> p >> n;
	cout << "Значение S=" << fixed << S << " " << "значение p=" << fixed << p << " " << "значение n=" << fixed << n << endl;
	if (S > 0 && p > 0 && n > 0) {
		r = p / 100.0;
		if (12 * (pow(1 + r, n) - 1 > 0)) {

			m = S * r * pow(1 + r, n) / (12 * (pow(1 + r, n) - 1));
			cout << "Месячная выплата 'm'=" << m << endl;
		}
		else {
			cout << "Не возможно вычислить значение 'm'. Знаменатель не может быть меньше или равен 0." << endl;
		}

	}
	else {
		cout << "Значения 'S', 'p', 'n' не могут быть меньше или равны 0!" << endl;
	}
	system("pause");
	task3();
}
