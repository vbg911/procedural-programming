#include <iostream>

using namespace std;
void task3();
float getNumber();
void Lending() {
	cout.precision(6);
	float S, p, m, n, r,m2;
	cout << "����� ������� p ��� ������� ���� ������ �����.\n\n";
	cout << "������� �������� ����� S=";
	S = getNumber();
	cout << "������� �������� ������� m=";
	m2 = getNumber();
	cout << "������� ���������� ��� n=";
	n = getNumber();
	cout << "�������� ����� S=" << fixed << S << " �������� ������� m=" << fixed << m2 << " ���������� ��� n=" << fixed << n << endl;
	if (S > 0 && m2 > 0 && n > 0) {
		for (float i = 0; i <= 100; i = i + 0.0001) {
		r = i;
		if (12 * (pow(1 + r, n) - 1 >= 0)) {
			m = S * r * pow(1 + r, n) / (12 * (pow(1 + r, n) - 1));
			if (m >= m2) {
				p = r * 100;
				cout << "������� p=" << fixed << p << endl;
				break;
			}
			else{
				cout <<"i="<<fixed<<i<< " m=" << fixed << m << " m2=" << fixed << m2 << endl;
			}
		}
		else {
			//cout << "�� �������� ��������� �������� 'm'. ����������� �� ����� ���� ������ ��� ����� 0." << endl;
		}
		}
	}else {
		cout << "�������� 'S', 'm', 'n' �� ����� ���� ������ ��� ����� 0!" << endl;
	}
	cout << "�� ������� ��������� ����� p." << endl;
	system("pause");
	task3();
}