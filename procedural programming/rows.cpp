// 1 ������
#include <fstream>
#include <iostream>
#include <string> 
using namespace std;
void task5();

void rows() {
	system("cls");
	cout << "��������� ����� 1/sin(1)+1/(sin(1) + sin(2)) + ... 1/(sin(1)+sin(n))+..." << endl;
	int n;
	float s = 0, ad = 0;
	cout << "������� ����������� ����� n:";
	cin >> n;
	if (!n==0) {
	for (int i = 1; i <= n; i++) {
		ad += sin(i);
		s += 1 / ad;
	}
	cout << "y=" << s << endl;	
	} else {
		cout << "���� �� �������� ����������� ������" << endl;
	}
	
	system("pause");
	task5();
}