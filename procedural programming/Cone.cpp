#include <iostream>
#include <cmath>

const double PI = 3.141592653589793;
using namespace std;
void task2();

void cone() {
	double h, R1, R2, l, V, S;
	cout.precision(3);
	system("cls");
	cout << "Задача «Конус»\n\n";
	cout << "Введите через пробел высоту усеченного конуса, радиус верхнего основания, радиус нижнего основания.\n";
	cin >> h >> R1 >> R2;
	cout << "Высота конуса =" << fixed << h << " радиус верхнего основания =" << fixed << R1 << " радиус нижнего основания =" << fixed << R2 << endl;
	if (h <= 0 || R1 <= 0 || R2 <= 0) {
		cout << "Значения не могут быть <0\n";
		system("pause");
		task2();
	}
	else {
		V = 0.333333333333333 * PI * h * (R1 * R1 + R1 * R2 + R2 * R2);
		l = sqrt(pow(h,2)+(pow((R2-R1),2)));
		cout << "образующая усеченного конуса =" << fixed << l << endl;
		S = PI * (l * R2 + l * R1 + R2 * R2 + R1 * R1);
		cout << "Объем усеченного конуса V = " << fixed << V << "\n" << "Площадь полной поверхности усеченного конуса S = " << S << endl;
	}	
}