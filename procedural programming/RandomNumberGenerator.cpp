#include <iostream>

using namespace std;
void task4();
void rand(int m, int i, int c, int x0);

void random_generator() {
	int m, i, c, x0;
	cout << "������ ���������� ��������� �����.\n ��������� ��������� ��������������� ����� �� �������\n";
	cout << "������� ����� m=";
	cin >> m;
	cout << "\n������� ����� i=";
	cin >> i;
	cout << "\n������� ����� c=";
	cin >> c;
	cout << "\n������� ��������� �������� x0=";
	cin >> x0;
	rand(m, i, c, x0);
	system("pause");
	task4();
}


void rand(int m, int i, int c, int x0) {
	cout << "\n\n";
	int* random = new int[i];
	random[0] = x0;
	for (int count = 0; count < i; count++) {
		random[count + 1] = ((m * random[count]+i) % c);
	}
	cout << "������ ��������� ����� = ";
	for (int count = 0; count < i; count++) {
		cout <<"����� �������� ="<<count<<" ������� ="<< random[count] << "\n";
	}
	cout << "\n";
}