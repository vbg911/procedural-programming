#include <iostream>

using namespace std;
void task2();



void branching() {
	double a, x, w;
	cout.precision(3);
	system("cls");
	cout << "������ �������������\n\n";
	cout << "������� ����� ������ ������������ �������� ��� 'a' � 'x'.\n";
	cin >> a >> x;
	cout << "�������� 'a'=" << fixed << a << "\n" << "�������� 'x'=" << fixed << x << endl;
	if (abs(x) < 1) {
		if (x == 0) {
			cout << "|x|<1 �������� 'w' ����� �������������." << endl;
		}
		else {
			w = a * log(abs(x));
			cout << "|x|<1 �������� 'w'=" << fixed << w << endl;
		}
	}
	else if (abs(x) >= 1 && a > x * x) {
		w = sqrt(a - x * x);
		cout << "|x|>=1 �������� 'w'=" << fixed << w << endl;
	}
	else {
		cout << "|x|>=1 �������� 'w' �� ����� ���� ����������." << endl;
	}
	system("pause");
	task2();
}
