#include <iostream>

using namespace std;
void task2();


void tabulation() {
	double x = -4, y = 0;
	cout.precision(3);
	system("cls");
	cout << "Задача «Табуляция»\n\n";
	for (x = -4; x < 4; x += 0.5)
	{
		y = (x * x - 2 * x + 2) / (x - 1);
		if (x - 1 == 0)
			cout << "Значение x=" << fixed << x << "  " << " значение 'y' не возможно вычислить!" << endl;
		else
			cout << "Значение x=" << fixed << x << "  " << " значение y=" << y << endl;

	}
	system("pause");
	task2();
}