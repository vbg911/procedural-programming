#include <iostream>

using namespace std;
void task5();
int nod(int a, int b);

void euclidean_alg(){
	system("cls");
	int num1, num2;
	cout << "������ ��������� �������.\n ����� (���) ��� ����� ���� �����.\n\n";
	cout << "������� 1 ����� ���� :";
	cin >> num1;
	cout << "\n������� 2 ����� ���� :";
	cin >> num2;
	cout <<"\n(���) ="<<nod(num1,num2)<<endl;
	system("pause");
	task5();
}

int nod(int a, int b) {
	int c;
	while (b) {
		c = a % b;
		a = b;
		b = c;
	}
	return abs(a);
}