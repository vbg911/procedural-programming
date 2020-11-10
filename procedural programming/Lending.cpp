#include <iostream>

using namespace std;
void task3();
float getNumber();
void Lending() {
	cout.precision(6);
	float S, p, m, n, r,m2;
	cout << "Найти процент p под который была выдана ссуда.\n\n";
	cout << "Введите величину ссуды S=";
	S = getNumber();
	cout << "Введите величину выплаты m=";
	m2 = getNumber();
	cout << "Введите количество лет n=";
	n = getNumber();
	cout << "величина ссуды S=" << fixed << S << " величина выплаты m=" << fixed << m2 << " количество лет n=" << fixed << n << endl;
	if (S > 0 && m2 > 0 && n > 0) {
		for (float i = 0; i <= 100; i = i + 0.0001) {
		r = i;
		if (12 * (pow(1 + r, n) - 1 >= 0)) {
			m = S * r * pow(1 + r, n) / (12 * (pow(1 + r, n) - 1));
			if (m >= m2) {
				p = r * 100;
				cout << "процент p=" << fixed << p << endl;
				break;
			}
			else{
				cout <<"i="<<fixed<<i<< " m=" << fixed << m << " m2=" << fixed << m2 << endl;
			}
		}
		else {
			//cout << "Не возможно вычислить значение 'm'. Знаменатель не может быть меньше или равен 0." << endl;
		}
		}
	}else {
		cout << "Значения 'S', 'm', 'n' не могут быть меньше или равны 0!" << endl;
	}
	cout << "Не удалось вычислить число p." << endl;
	system("pause");
	task3();
}