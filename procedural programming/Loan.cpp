#include <iostream>

using namespace std;
void task3();



void loan() {
	double S, p, n, m, r;
	cout.precision(2);
	system("cls");
	cout << "������ ����\n\n";
	cout << "������� ����� ������ ����� ����� 'S', ������� 'p', ���������� ��� 'n'." << endl;
	cin >> S >> p >> n;
	cout << "�������� S=" << fixed << S << " " << "�������� p=" << fixed << p << " " << "�������� n=" << fixed << n << endl;
	if (S > 0 && p > 0 && n > 0) {
		r = p / 100.0;
		if (12 * (pow(1 + r, n) - 1 > 0)) {

			m = S * r * pow(1 + r, n) / (12 * (pow(1 + r, n) - 1));
			cout << "�������� ������� 'm'=" << m << endl;
		}
		else {
			cout << "�� �������� ��������� �������� 'm'. ����������� �� ����� ���� ������ ��� ����� 0." << endl;
		}

	}
	else {
		cout << "�������� 'S', 'p', 'n' �� ����� ���� ������ ��� ����� 0!" << endl;
	}
	system("pause");
	task3();
}
