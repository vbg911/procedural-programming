#include <iostream>

using namespace std;
void task2();

void function() {
	double x, y, b, z;
	cout.precision(3);
	system("cls");
	cout << "������ ���������\n\n";
	cout << "������� ����� ������ �������� ��� 'x', 'y', 'b'" << endl;
	cin >> x >> y >> b;
	cout << "�������� x= " << fixed << x << "\n" << "�������� y= " << fixed << y << "\n" << "�������� b= " << fixed << b << endl;
	if (b - y > 0 && b - x >= 0) {
		z = log(b - y) * sqrt(b - x);
		cout << "�������� 'z'=" << z << endl;
	}
	else {
		cout << "�������� 'z' �� ����� ���� ����������." << endl;
	}
	system("pause");
	task2();
}
